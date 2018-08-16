#include <stdio.h>

int main( void ) {
	int arr[5] = { 0 };
	int count = sizeof( arr ) / sizeof( int );
	printf( "请输入5个数字\n" );
	for( int i = 0; i < 5; i++ ){
		scanf( "%d", &arr[i] );
	}

	printf( "请输入要删除的数字\n" );
	int num;
	scanf( "%d", &num );

	for( int i = 0; i < 5; i++ ) {
		if( num == arr[i] ) {
			for ( int j = i; j < 4; j++ ){
				arr[j] = arr[j + 1];
			}
			count--;
			break;
		}
	}
	
	for( int i = 0; i < count; i++ ) {
		printf( "%d\t", arr[i] );
	}
	printf( "\n" );
	return 0;
}
