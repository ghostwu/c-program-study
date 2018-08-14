#include <stdio.h>
/*
 * gets非常危险，建议不要使用
 */

int main( void ) {
	
	printf( "请输入用户名\n" );
	char username[256];
	gets( username );
	printf( "用户名是:%s\n", username );

	char password[256];
	printf( "请输入密码\n" );
	gets( password );
	printf( "密码是:%s\n", password );

	return 0;
}
