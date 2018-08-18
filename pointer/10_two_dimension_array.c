#include <stdio.h>

int main( void ){
	double num[2][5] = {
		{ 10.2, 20.3, 30.45, 40, 50 },
		{ 100, 200, 300, 400, 500 }
	};
	printf( "sizeof(double)=%ld\n", sizeof( double ));
	printf( "num=%p, num+0=%p, num+1=%p\n", num, (num+0), (num+1) );
	printf( "*num=%p, *(num+0)=%p, *(num+1)=%p\n", *num, *(num+0), *(num+1) );
	printf( "**(num)=%.2lf, **(num+0)=%.2lf, **(num+1)=%.2lf\n", **num, **(num+0), **(num+1) );
	/*
	for( int i = 0; i < 2; i++ ){
		for( int j = 0; j < 5; j++ ) {
			//printf( "a[%d][%d]=%.2lf\t", i, j, num[i][j] );	
			printf( "a[%d][%d]=%.2lf\t", i, j, *( *(num + i) + j ) );
		}
		printf( "\n" );
	}
	*/
	return 0;		
}
