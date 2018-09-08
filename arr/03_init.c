#include <stdio.h>
#define N 5

int  main( void ) {
	int arr[N] = { 10, 20, 30, 40, 50 };
	int arr2[N];
	int i = 0;
	for( i = 0 ; i < N ; i++ ){
		arr2[i] = arr[i];
	}
	for( i = 0 ; i < N ; i++ ){
		printf( "arr2[%d] = %d\t", i, arr2[i] );
	}
	putchar( '\n' );
	return 0;
}
