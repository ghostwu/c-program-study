#include <stdio.h>

#define greeting "nice to meet you!"
int main( void ) {
	printf( "pls input your name\n" );
	char name[20];
	//scanf遇到第一个空白符(空格,制表符,换行符)就不再读取输入
	//如：ghost wu  只会读取ghost
	scanf( "%s", name );
	printf( "hi %s, %s\n", name, greeting );
	return 0;
}


