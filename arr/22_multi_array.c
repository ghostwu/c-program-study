#include <stdio.h>

int main( void ){
	/*
	int a[3][2] = {
		{ 1, 2 },
		{ 3, 4 },
		{ 5 }
	};
	*/
	/*
	int a[][2] = {
		{ 1, 2 },
		{ 3, 4 },
		{ 5 }
	};
	*/
	int a[][2] = { [0][1] = 10, [1][1] = 20, [2][1] = 30 };
	for( int i = 0 ; i < 3 ; i++ ){
		for( int j = 0 ; j < 2 ; j++ ){
			printf( "a[%d][%d]=%d\n", i, j, a[i][j] );
		}
	}
	return 0;
}
