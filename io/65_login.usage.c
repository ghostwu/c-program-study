#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {

	system( "echo \"username:ghostwu\" > 65.txt" );
	system( "echo \"pwd:abc123\" >> 65.txt" );
	
	FILE *stream;
	stream = fopen( "65.txt", "r" );	
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	char f_username[128];
	fgets( f_username, 128, stream );
	char *ukey = strtok( f_username, ":" );
	char *uvalue = strtok( NULL, ":" );

	char f_pwd[128];
	fgets( f_pwd, 128, stream );
	char *pkey = strtok( f_pwd, ":" );
	char *pvalue = strtok( NULL, ":" );

	char input_username[128];
	printf( "请输入用户名:" );
	fgets( input_username, 128, stdin );
	
	char input_pwd[128];
	printf( "请输入密码:" );
	fgets( input_pwd, 128, stdin );

	if( strcmp( uvalue, input_username ) == 0 && strcmp( pvalue, input_pwd ) == 0 ){
		puts( "注册成功" );
	}else{
		puts( "注册失败" );
	}

	fclose( stream );

	return 0;
}
