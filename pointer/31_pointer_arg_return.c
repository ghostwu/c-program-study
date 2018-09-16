/*
 * 指针传参和返回值
 */

#include <stdio.h>

int* swap( int *pa, int *pb ) {
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	return pa;
}

int main( void ) {
	
	int a = 10;
	int b = 20;
	int *p = swap( &a, &b );
	printf( "a=%d, b=%d, *p=%d\n", a, b, *p );
	return 0;
}
