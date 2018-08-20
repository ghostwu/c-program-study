#include <stdio.h>

int main( void ) {

	const int **p2;	
	int *p1;
	const int n = 10;
	
	p2 = &p1; //const类型的p2被改变了
	*p2 = &n;
	*p1 = 100;

	printf( "n=%d\n", n );
	
	int a = 50;
	int *p3 =  &a;
	p2 = &p3;
	
	printf( "**p2=%d\n", **p2 ); 

	return 0;
}
