#include <stdio.h>
#define N 10

int sum( int* start, int* end );

int main( void ){
	int arr[N] = { 0 };
	for( int i = 0; i < N; i++ ){
		arr[i] = ( i + 1 );
	}
	for( int i = 0; i < N; i++ ){
		printf( "%d\t", arr[i] );
	}
	printf( "\n" );

	printf( "1-10的值为%d\n", sum( arr, arr + N ) );
	return 0;
}

int sum( int* start, int* end ) {	
	int total = 0;
	while( start < end ){ 
		total += *start++;
	}
	return total;
}

