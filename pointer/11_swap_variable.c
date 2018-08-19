#include <stdio.h>

void swap( int x, int y );
void swap2( int* x, int* y );

int main( void ){

	int a = 100, b = 200;
	printf( "---------------交换前[swap]------------\n" );
	printf( "a=%d, b=%d\n", a, b );
	swap( a, b );
	printf( "---------------交换后[swap]------------\n" );
	printf( "a=%d, b=%d\n", a, b );

	printf( "---------------交换前[swap2]------------\n" );
	printf( "a=%d, b=%d\n", a, b );
	swap2( &a, &b );
	printf( "---------------交换后[swap2]------------\n" );
	printf( "a=%d, b=%d\n", a, b );

	return 0;		
}

void swap( int x, int y ){
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swap2( int* x, int* y ){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
