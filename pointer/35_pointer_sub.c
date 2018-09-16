/*
 * 指针减法
 */

#include <stdio.h>

int main( void ) {
	int a[6] = { 10, 20, 30, 40, 50, 60 };
	int *p = a;
	printf( "*p=%d\n", *p );
	printf( "*(p+3)=%d\n", *( p + 3 ) );
	int *p2 = a + 3;
	p = a + 5;
	int *res = ( int* )( a + (p - p2) );
	printf( "res=%p, *res=%d\n", res, *res );
	return 0;
}
