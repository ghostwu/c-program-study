#include <stdio.h>
#define N 12

int main( void ) {
	const int month[N] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = 0;
	for( i = 0; i < N; i++ ){
		printf( "i=%d \t%d\n", ( i + 1 ), *( month + i ) );
	}
	return 0;
}
