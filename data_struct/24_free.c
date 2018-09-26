#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	
	float *fp;

	fp = (float*)malloc( sizeof( float ) );

	if( NULL == fp ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}

	free( fp );

	return 0;
}
