/*
 * 指针遍历数组
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void init_arr( int a[], int n ) {
	//随机数种子
	srand( time( NULL ) );
	int i = 0;
	for( i = 0 ; i < n ; i++ ) {
		a[i] = rand() % 10 + 1;
	}
}

void iter_arr( int a[], int n ) {
	int *p;
	for( p = a ; p < a + n ; p++ ){
		printf( "p=%p, *p=%d\n", p, *p );
	}
}

int main( void ) {
	int a[N] = {0};
	init_arr( a, N );
	iter_arr( a, N );
	return 0;
}
