/*
 *  自定义输出函数,实现打印一个字符串，并统计字符个数
 */
#include <stdio.h>

int my_put( const char* string );

int main( void ) {
	int c = my_put( "hello, ghostwu!" );
	printf( "print %d characters\n", c );
	return 0;
}

int my_put( const char* string ) {
	int count = 0;
	while( *string ){
		putchar( *string++ );
		count++;
	}
	putchar( '\n' );
	return count;
}
