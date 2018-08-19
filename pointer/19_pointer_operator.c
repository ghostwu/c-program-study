/*
 * 指针运算
 */

#include <stdio.h>
#define N 5

int main( void ) {

	int arr[N] = { 100, 200, 300, 400, 500 };	
	int* p1, *p2, *p3;
	p1 = arr;
	p2 = &arr[4];

	printf( "p1=%p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1 );
	
	//指针加法
	p3 = p1 + 4;	
	printf( "p1+4=%p, *(p1+4)=%d\n", p1 + 4, *( p1 + 4 ) );

	p1++;
	printf( "p1=%p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1 );
	
	--p2;
	printf( "p2=%p, *p2 = %d, &p2 = %p\n", p2, *p2, &p2 );

	p1--;
	++p2;
	printf( "p1=%p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1 );
	printf( "p2=%p, *p2 = %d, &p2 = %p\n", p2, *p2, &p2 );

	//指针减去指针
	printf( "p2=%p, p1 = %p, p2 - p1 = %lu\n", p2, p1, ( p2 - p1 ) );
	
	//指针减去整数
	printf( "p3=%p, p3-2= %p\n", p3, ( p3 - 2 ) );

	return 0;
}
