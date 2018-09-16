/*
 * 指针相减
 */

#include <stdio.h>

int main( void ) {

	int a[10] = { 0 };
	for( int i = 0 ; i < 10 ; i++ ){
		a[i] = i + 1;
	}

	int *p = NULL;
	for( p = ( a + 9 ) ; p >= a ; p-- ){
		printf( "*p=%d\n", *p );
	}
	return 0;
}
