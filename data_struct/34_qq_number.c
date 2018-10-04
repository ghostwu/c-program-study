/*
 * 啊哈算法: 解密qq号码
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	
	int arr[50] = { 6, 3, 1, 7, 5, 8, 9, 2, 4 };
	int head = 0;
	int tail = 9;
	while( head < tail ) {
		printf( "head=%d\n", arr[head] );
		head++;
		arr[tail] = arr[head];
		tail++;
		head++;
	}
	return 0;
}
