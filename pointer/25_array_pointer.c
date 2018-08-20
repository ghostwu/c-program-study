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
	
	int (*p_arr)[2];
	p_arr = arr;

	printf( "------------方法一:指针移动-------------\n" );
	
	for( int i = 0; i < ROWS; i++ ){
		for( int j = 0; j < COLS; j++ ) {
			printf( "*( *( p_arr + %d ) + %d ) = %d\t", i, j, *( *( p_arr + i ) + j ) );
		}
		putchar( '\n' );
	}

	printf( "------------方法二:下标法-------------\n" );

	for( int i = 0; i < ROWS; i++ ){
		for( int j = 0; j < COLS; j++ ){
			printf( "p_arr[%d][%d] = %d\t", i, j, p_arr[i][j] );
		}
		putchar( '\n' );
	}

	//int **p;
	//*p = arr[0];
	//printf( "*p=%p\n", *p );
	printf( "&arr[0][0]=%p\n", &arr[0][0] );
	int *p = &arr[0][0];
	printf( "p=%p\n", p );
	p = arr[0];
	printf( "p=%p\n", p );

	return 0;
}
