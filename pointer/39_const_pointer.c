#include <stdio.h>

int main( void ) {
	int a = 10;
	//p是const指针类型, *p可以改变, p不可以改变
	int* const p = &a;
	*p = 100;
	int b = 100;
	//p不能改变
	//p = &b;
	printf( "a=%d, *p=%d\n", a, *p );
	return 0;
}
