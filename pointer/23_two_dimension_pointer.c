#include <stdio.h>
#define ROWS 4
#define COLS 3

int main( void ) {
	
	int num[ROWS][COLS] = {
		{ 10, 20, 30 },
		{ 5, 10, 15 },
		{ 20, 40, 60 },
		{ 30, 60, 90 }
	};
	
	//方法1, 下标遍历
	/*
	for( int i = 0; i < ROWS; i++ ){
		printf( "%2d, %2d, %2d\n", num[i][0], num[i][1], num[i][2] );
	}
	*/

	//方法2	
	/*
	for( int i = 0; i < ROWS; i++ ){
		for( int j = 0 ; j < COLS; j++ ){
			printf( "%2d\t", num[i][j] );
		}
		putchar( '\n' );	
	}
	*/
	
	//方法3
	for( int i = 0; i < ROWS; i++ ){
		for( int j = 0 ; j < COLS; j++ ){
			printf( "%2d\t",  *( *( num + i ) + j ) );
		}
		putchar( '\n' );
	}

	
	return 0;
}
