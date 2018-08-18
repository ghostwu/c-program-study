/*
 * 指针遍历数组元素
 */

#include <stdio.h>

int main( void ) {

	double score[4] = { 67.2, 38.9, 24.56, 89.20 };
	double *ptr_score = &score[0];

	for( int i = 0; i < ( sizeof( score ) / sizeof( double ) ); i++ ){
		printf( "%.2lf\n", *( ptr_score + i ) );
	}
	
	return 0;
}
