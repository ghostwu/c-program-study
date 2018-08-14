/*
 * 键盘输入: username, password, confirm_password, email, mobile_phone
 * 检查: 用户名小于5位并且必须是字母和数字的组合,才能注册成功 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_contain_number( char* _str ) {
	int i = 0;
	for( i = 0; i < strlen( _str ); i++ ){
		if( _str[i] >= '0' && _str[i] <= '9' ) {
			return 1;
		}
	}
	return 0;
}

int is_contain_alphabet( char* _str ) {
	int i = 0;
	for( i = 0; i < strlen( _str ); i++ ){
		if( ( _str[i] >= 'a' && _str[i] <= 'z' ) || ( _str[i] >= 'A' && _str[i] <= 'Z' ) ) {
			return 1;
		}
	}
	return 0;
}

int check_username( char* _username ) {
	//strlen 包含一个空格
	if( strlen( _username ) >= 6 && is_contain_number( _username ) && is_contain_alphabet( _username ) ){
		return 1;
	}
	return 0;
}

int main ( void ) {
	
	char *username;
	username = malloc( 128 );
	printf( "请输入用户名:" );
	fgets( username, 128, stdin );

	if( !check_username( username ) ) {
		puts( "注册失败" );
		exit( 0 );
	}

	char *password;
	password = malloc( 128 );
	printf( "请输入密码:" );
	fgets( password, 128, stdin );

	char *confirm_password;
	confirm_password = malloc( 128 );
	printf( "请再次输入密码:" );
	fgets( confirm_password, 128, stdin );

	if( strcmp( password, confirm_password ) != 0 ){
		puts( "注册失败" );
		exit( 0 );
	}

	char email[128];
	printf( "请输入邮箱:" );
	fgets( email, 128, stdin );

	char mobile[128];
	printf( "请输入手机:" );
	fgets( mobile, 128, stdin );

	puts( "注册成功" );

	return 0;
}

