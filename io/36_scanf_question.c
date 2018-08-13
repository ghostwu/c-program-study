#include <stdio.h>

int main( void ) {
	printf( "pls input data\n" );
	/*
	 * 如果是%c格式转换符, 不会忽略空白字符
	 */
	
	char ch;
	//如果第一次输入 12345, １会存储到ch, 2345还在缓冲区
	scanf( "%c", &ch );
	printf( "%c\n", ch );
	
	//ch2就会收到缓冲区的2,直接退出
	//很显然我们需要把上次的缓冲区清楚
	char ch2;
	scanf( "%c", &ch2 );
	printf( "%c\n", ch2 );

	return 0;
}
