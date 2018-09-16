/*
 * 递归实现倒序打印, 实现类似堆栈的效果
 */

#include <stdio.h>

#define LEN 3

char c[LEN] = { 'a', 'b', 'c' };

void print_backward( int n ) {
	if( n == LEN ) return;
	print_backward( n + 1 );
	putchar( c[n] );
}

int main( void ) {
	print_backward( 0 );
	putchar( '\n' );
	return 0;
}
