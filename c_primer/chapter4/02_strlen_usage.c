#include <stdio.h>
#include <string.h> //strlen需要的头文件

#define greeting "nice to meet you"

int main( void ) {
	char name[30];
	printf( "pls input your name:\n" );
	scanf( "%s", name );

	//strlen 实际输入字符的空间
	//sizeof 定义时字符占用的空间
	printf( "strlen(name)占用的空间:%lu, sizeof(name)占用的空间:%lu\n", strlen( name ), sizeof( name ) );

	//greeting实际字符16个
	//strlen(greeting) = 16
	//sizeof(greeting) = 17  因为c语言会在字符串的末尾添加一个null(\0)作为字符串的结尾
	//null和\0对应的ascii码为0
	printf( "strlen(greeting)占用的空间:%lu, sizeof(greeting)占用的空间:%lu\n", strlen( greeting ), sizeof( greeting ) );
	
	return 0;
}

