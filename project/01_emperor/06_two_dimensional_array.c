#include <stdio.h>

int main( void ) {

	//double score[4][3] = { 70, 80, 90, 10, 20, 30, 100, 200, 300, 1000, 2000, 3000 };
	double score[4][3] = { { 70, 80, 90 }, { 10, 20, 30 }, { 100, 200, 300 }, { 1000, 2000, 3000 } };
	for( int i = 0; i < 4; i++ ){
		for( int j = 0; j < 3; j++ ){
			printf( "score[%d][%d] = %.0lf\t", i, j, score[i][j] );
		}
		printf( "\n" );
	}
	return 0;
}
