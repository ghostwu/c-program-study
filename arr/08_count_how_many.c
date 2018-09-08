/*
 * 统计0-9 出现的概率( 次数 )
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100000

int a[N];

void gen_num(){
	int i = 0;
	for( i = 0 ; i < N ; i++ ) {
		a[i] = rand() % 10;
	}
}

int how_many( int value ) {
	int count = 0;
	int i = 0;
	for( i = 0 ; i < N ; i++ ){
		if( value == a[i] ) {
			count++;
		}
	}
	return count;
}

int main( void ) {
	printf( "--------打印统计结果-------\n" );
	gen_num();
	int i = 0;
	for( i = 0 ; i < 10; i++ ){
		printf( "%d------------->%d\n", i, how_many( i ) );
	}
	return 0;
}
