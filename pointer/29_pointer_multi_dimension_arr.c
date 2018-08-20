#include <stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows( int arr[][COLS], int rows );
void sum_cols( int arr[][COLS], int rows );
void sum_all( int arr[][COLS], int rows );

int main( void ){
	
	int arr[ROWS][COLS] = {
		{ 10, 20, 30, 300 },
		{ 40, 50, 60, 600 },
		{ 70, 80, 90, 900 }
	};
	sum_rows( arr, ROWS );
	sum_cols( arr, ROWS );
	sum_all( arr, ROWS );
	return 0;
}

void sum_all( int arr[][COLS], int rows ) {
	int r;
	int c;
	int total = 0;
	for( r = 0; r < rows; r++ ){
		for( c = 0; c < COLS; c++ ){
			total += arr[r][c];
		}
	}
	printf( "所有的元素之和为%d\n", total );
}

void sum_cols( int arr[][COLS], int rows ) {
	int r;
	int c;
	int total;
	for( c = 0; c < COLS; c++ ){
		total = 0;
		for( r = 0 ; r < rows; r++ ){
			total += arr[r][c];
		}
		printf( "第%d列的和为:%d\n", ( c + 1 ), total );
	}
}

void sum_rows( int arr[][COLS], int rows ) {
	int r;
	int c;
	int total;
	for( r = 0; r < rows; r++ ){
		total = 0;
		for( c = 0; c < COLS; c++ ){
			total += arr[r][c];
		}
		printf( "row:%d, sum of row%d=%d\n", r, r, total );
	}
}
