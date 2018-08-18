#include <stdio.h>

int main( void ) {
	int arr[] = { 10, 20, 30, 40, 50 };
	int* ptr_arr = arr;
	/*
	for( int i = 0; i < ( sizeof( arr ) / sizeof( int ) ); i++ ){
		printf( "第%d个元素的值为%d,地址为%p\n", ( i + 1 ), *ptr_arr, ptr_arr );
		ptr_arr++;
	}
	*/

	for( int i = 0; i < ( sizeof( arr ) / sizeof( int ) ); i++ ){
		printf( "第%d个元素的值为%d,地址为%p\n", ( i + 1 ), *( ptr_arr + i ), ( ptr_arr + i ) );
	}

	return 0;
}
