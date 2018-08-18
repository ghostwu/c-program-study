#include <stdio.h>

int main( void ) {
	int arr[] = { 10, 20, 30, 40, 50 };
	int tmp;
	int len = sizeof( arr ) / sizeof( int );
	for( int i = 0; i < len / 2; i++ ){
		tmp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = tmp;
	}

	for( int i = 0; i < len; i++ ){
		printf( "%d\n", arr[i] );
	}

	return 0;
}
