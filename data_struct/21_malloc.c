/*
 * malloc 动态分配内存
 */
#include <stdio.h>
#include <stdlib.h>

int main( void ) {

	float *fp;
	fp = ( float* )malloc( sizeof( float ) );
	if( NULL == fp ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}
	*fp = 3.1415926;
	printf( "*fp=%.2f\n", *fp );
	return 0;
}
