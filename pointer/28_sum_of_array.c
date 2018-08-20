#include <stdio.h>

int sum( int *p_arr, int n );

int main( void ) {
	
	int arr[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};

	int total = 0;
	for( int i = 0; i < 3; i++ ){
		total += sum( arr[i], 4 );
	}
	printf( "total=%d\n", total );
	return 0;
}

int sum( int *p_arr, int n ) {
	int total = 0;
	for( int i = 0; i < n; i++ ){
		total += p_arr[i];
	}
	return total;
}
