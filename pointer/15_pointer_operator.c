/*
 * 指针运算, 指针+1--->相当于加上 sizeof( 数据类型的大小 )
 */
#include <stdio.h>
#define N 5

int main( void ) {
	short int data[N];
	short* p_data = data;
	short index = 0;
	double bills[N];
	double* p_bills = bills;
	printf( "%23s %15s\n", "short", "double" );
	for( index = 0; index < N; index++ ){
		printf( "pointer + %d %p %p\n", index, ( p_data + index ), ( p_bills + index ) );
	}
	return 0;
}
