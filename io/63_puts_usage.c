#include <stdio.h>
#include <stdlib.h>

int main( void ) {

	char username[128];
	printf( "请输入用户名:" );
	fgets( username, 128, stdin );
	
	char *password;
	printf( "请输入密码:" );
	password = malloc( 128 );
	gets( password );

	printf( "请再次输入密码:" );
	char confirm[128];
	gets( confirm );

	if( strcmp( password, confirm ) == 0 ) {
		puts( "注册成功!" );	
	}else{
		puts( "注册失败!" );	
	}
	free( password );

	return 0;
}
