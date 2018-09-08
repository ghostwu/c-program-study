#include <stdio.h>
#define N 4

int main( void ) {
	//没有给初值的,默认为0
	//int count[N] = { 10, 20 };
	//int count[N] = { 10, 20, };
	int count[N] = { [2] = 10, 20, };
	for( int i = 0; i < N; i++ ){
		printf( "count[%d] = %d\n", i, count[i] );
	}
	return 0;
}
