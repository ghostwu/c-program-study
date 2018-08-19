/*
 * 数组没有初始化，值是随机的，垃圾值
 */
#include <stdio.h>
int main( void ) {
	int arr[5];
	printf( "%s%30s\n", "i", "arr[i]" );
	for( int i = 0; i < 5; i++ ){
		printf( "%d %30d\n", i, arr[i] );
	}
	return 0;
}
