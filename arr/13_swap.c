#include <stdio.h>

void swap( int *a, int *b ) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main( void ) {
	int n1 = 10;
	int n2 = 20;
	printf( "swap before: n1=%d,n2=%d\n", n1, n2 );
	swap( &n1, &n2 );
	printf( "swap after: n1=%d,n2=%d\n", n1, n2 );
}
