/*
 * 简化版桶排序
 */
#include <stdio.h>
#define N 101

int main( void ) {
	int a[N] = { 0 };
	int i = 0, num;
	for( i = 0 ; i < 5; i++ ){
		//输入1-10之间的数字
		scanf( "%d", &num );
		//把该数字对应的索引+1, 代表该数字出现过1次
		a[num]++;
	}

	int j = 1;
	for( i = N - 1 ; i >= 0 ; i-- ){
		for( j = 1; j <= a[i]; j++ ) {
			printf( "%d\t", i );
		}
	}
	putchar( '\n' );

	return 0;
}
