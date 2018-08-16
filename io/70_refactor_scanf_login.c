/*
 * 从终端命令行获取文件名
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( int argc, char* argv[] ) {
	
	if( argc < 2 ) {
		printf( "usage <filename>\n" );
		exit( 0 );
	}

	char username[128];
	printf( "请输入用户名:" );
	fgets( username, 128, stdin );

	char password[128];
	printf( "请输入密码:" );
	fgets( password, 128, stdin );

	char confirm[128];
	printf( "请输入确认密码:" );
	fgets( confirm, 128, stdin );
	
	if( strcmp( password, confirm ) == 0 ){
		FILE *stream;
		stream = fopen( argv[1], "w+" );
		if( NULL == stream ) {
			fprintf( stderr, "fopen: %s\n", strerror( errno ) );
			exit( EXIT_FAILURE );
		}
		if( EOF == fputs( username, stream ) ) {
			puts( "用户名称写入失败" );	
			exit( EXIT_FAILURE );
		}
		if( EOF == fputs( password, stream ) ) {
			puts( "密码写入失败" );	
			exit( EXIT_FAILURE );
		}
		puts( "用户注册成功" );
	}else{
		puts( "用户注册失败" );
	}

	return 0;
}

