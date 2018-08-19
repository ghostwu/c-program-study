/*
 * const:防止后面的内容被修改，只允许读
 */
#include <stdio.h>
#define N 10

int sum( const int* arr, int n );

int main( void ) {
	int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf( "1-10的和为%d\n", sum( a, 10 ) );
	return 0;
}

int sum( const int* arr, int n ){
	int total = 0;
	for( int i = 0; i < n; i++ ) {
		total += *( arr + i );
	}
	return total;
}
