/*
 * 部分初始化的数组,如果其他项没有初始化,默认值为0
 */
#include <stdio.h>

int main( void ) {
	int arr[5] = { 10, 20 };
	printf( "%s%30s\n", "i", "arr[i]" );
	for( int i = 0; i < 5; i++ ){
		printf( "%d%30d\n", i, arr[i] );
	}
	return 0;
}
