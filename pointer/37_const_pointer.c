#include <stdio.h>

int main( void ) {
	const int *p;
	int a = 10;
	p = &a;
	// p 所指向的单元 是一个const类型, 不可以改变
	//*p = 100;
	//但是p本身的指向是可以改变的
	int b = 100;
	p = &b;

	printf( "a = %d, *p=%d\n", a, *p );
}
