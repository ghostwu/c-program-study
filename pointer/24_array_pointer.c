/*
 * 指向数组的指针
 */
#include <stdio.h>

int main( void ) {
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
	int (*p_arr)[2];
	p_arr = zippo;
	
	printf( "p_arr=%p, (p_arr+1)=%p\n", p_arr, ( p_arr + 1 ) );	
	printf( "zippo[0]=%p, (zippo[0]+1) = %p, *zippo=%p, *zippo+1=%p, &zippo[0][0]=%p\n", zippo[0], zippo[0] + 1, *zippo, *zippo + 1, &zippo[0][0] );

	printf( "p_arr[0]=%p\n", p_arr[0] );
	printf( "p_arr[0] + 1=%p\n", p_arr[0] + 1 );

	printf( "*p_arr=%p, *p_arr + 1 = %p\n", *p_arr, *p_arr + 1 );
	printf( "p_arr[0][0]=%d\n", p_arr[0][0] );
	printf( "*p_arr[0]=%d\n", *p_arr[0] );
	printf( "**p_arr=%d\n", **p_arr );
	printf( "p_arr[2][1]=%d\n", p_arr[2][1] );
	printf( "*(*(p_arr+2)+1)=%d\n", *( *( p_arr + 2 ) + 1 ) );

	return 0;
}
