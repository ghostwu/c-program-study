#include <stdio.h>
#define ROWS 4
#define COLS 2

int main( void ) {
	int arr[ROWS][COLS] = {
		{ 10, 20 },
		{ 30, 40 },
		{ 50, 60 },
		{ 70, 80 }
	};
	
	int *p;
	p = arr[0];

	for( int i = 0 ; i < ROWS * COLS; i++ ){
		printf( "%d ", *( p + i ) );
	}
	putchar( '\n' );

	/*
	printf( "*p=%d\n", *p );
	printf( "*( p + 1 )=%d\n", *( p + 1 ) );
	printf( "*( p + 2 )=%d\n", *( p + 2 ) );
	*/

	return 0;
}
