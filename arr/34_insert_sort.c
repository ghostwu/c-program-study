/*
 * 插入排序
 */
#include <stdio.h>
#define LEN 5
int a[LEN] = { 10, 2, 3, -1, 8 };

void insert_sort( void ) {
	int j = 1, i, key;
	for( j = 1 ; j < LEN ; j++ ){
		printf( "%d\t%d\t%d\t%d\t%d\n", a[0], a[1], a[2], a[3], a[4] );
		key = a[j];
		i = j - 1;
		while( i >= 0 && a[i] > key ) {
			a[i + 1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
	for( j = 0 ; j < LEN ; j++ ){
		printf( "%d\t", a[j] );
	}
	putchar( '\n' );
}

int main( void ) {
	insert_sort();
	return 0;
}
