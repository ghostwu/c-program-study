#include <stdio.h>
#include <stdlib.h>
#define N 10

int a[N];

//生成一个范围内的随机数( 10 - 20 )
// start = 10 end = 20 
void gen_num( int start, int end ) {
	int i = 0;
	for( i = 0; i < N; i++ ){
		a[i] = start + ( rand() % ( end - start + 1 ) );
	}
}

void print_num() {
	for( int i = 0; i < N; i++ ){
		printf( "a[i] = %d\n", a[i] );
	}
}

int main( void ) {
	gen_num( 10, 20 );		
	print_num();
	return 0;
}
