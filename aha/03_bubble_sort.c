/*
 * 冒泡排序
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen_rand( int n, int* res ) {
	srand( time( NULL ) );
	for( int i = 0 ; i < n ; i++ ){
		res[i] = rand() % 101;
	}
}

void print_arr( int res[], int n ) {
	for( int i = 0 ; i < n ; i++ ) {
		printf( "%d\t", res[i] );
	}
	putchar( '\n' );
}

void swap( int *a, int *b ) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble_sort( int a[], int n ) {
	for( int i = 0 ; i < n ; i++ ){
		for( int j = 0 ; j < n - i - 1; j++ ){
			if( a[j] < a[j + 1] ) {
				swap( &a[j], &a[j + 1] );
			}
		}
	}
}

int main( void ) {
	int a[10];
	gen_rand( 10, a );
	print_arr( a, 10 );
	bubble_sort( a, 10 );
	print_arr( a, 10 );
	return 0;
}
