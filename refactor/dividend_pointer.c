#include <stdio.h>

int main( void ) {
	int x = 10, y = 2;
	int *p = &y;

	//报错：编译器会认为下面这个指针操作符是个注释
	// int res = x/*p;
	// 应该把*p作为一个整体　括起来
	int res = x / ( *p );
	printf( "res = %d\n", res );
	return 0;	
}


