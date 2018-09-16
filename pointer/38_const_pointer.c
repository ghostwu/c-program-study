#include <stdio.h>

int main( void ) {

	const int a = 100;
	//int const *p 与 const int *p等价
	int const *p = &a;
	//*p = 1000;
	a = 10;

	printf( "a=%d, *p=%d\n", a, *p );

	return 0;
}
