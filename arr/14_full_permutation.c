/*
 * 全排列
 */
#include <stdio.h>
#define N 5

int count = 0;

void swap( int *a, int *b ) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void full_permutation( int a[], int begin, int end ) {
	if( begin >= end ) {
		for( int i = 0 ; i < end ; i++ ){
			printf( "%d\t", a[i] );
		}
		count++;
		putchar( '\n' );
	}else{
		for( int i = begin ; i < end ; i++ ){
			if( begin != i ) {
				swap( &a[begin], &a[i] );
			}
			full_permutation( a, begin + 1, end );
			if( begin != i ) {
				swap( &a[begin], &a[i] );
			}
		}
	}
}

int main( void ) {
	int arr[N] = {0};
	for( int i = 0 ; i < N ; i++ ){
		arr[i] = ( i + 1 );
	}
	full_permutation( arr, 0, N );
	printf( "%d的全排列的个数为%d\n", N, count );
	return 0;
}
