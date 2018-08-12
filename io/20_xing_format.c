/**********************%*的用法***********
	%*: 在printf中使用,*表示用后面传递的参数替代*的位置，实现动态格式输出.
**********************%n的用法***********/

#include <stdio.h>

int main( void ) {
	char *str = "ghostwu";
	printf( "%*s\n", 10, str );
	printf( "等价于\n" );
	printf( "%10s\n", str );

	//.*
	printf( "%.*s\n", 1, str ); //取出第1个字符
	printf( "%.*s\n", 2, str ); //取出第2个字符
	printf( "%.*s\n", 3, str ); //取出第3个字符
	return 0;
}


