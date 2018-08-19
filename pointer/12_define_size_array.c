#include <stdio.h>
#define N 12

int main( void ) {
	const int month[N] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	
	//month[0] = 60; //数组被意外修改,可以用const申明数组
	for( int i = 0; i < N; i++ ){
		printf( "%d月有%d天\n", ( i + 1 ), month[i] );
	}
	return 0;
}
