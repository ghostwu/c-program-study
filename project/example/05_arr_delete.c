#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	int arr[5] = { 0 };
	int count = sizeof( arr ) / sizeof( int );
	printf( "请输入5个数字\n" );
	for( int i = 0; i < 5; i++ ){
		scanf( "%d", &arr[i] );
	}

	printf( "请输入要删除的数字\n" );
	int num;
	int index = -1;
	scanf( "%d", &num );

	for( int i = 0; i < 5; i++ ) {
		if( num == arr[i] ) {
			index = i;
			break;
		}
	}

	if( index == -1 ) {
		printf( "没有找到要删除的数字\n" );
		exit( 0 );
	}else{
		for( int i = index; i < count - 1; i++ ) {
			arr[i] = arr[i+1];
		}
		count--;
	}
	
	for( int i = 0; i < count; i++ ) {
		printf( "%d\t", arr[i] );
	}
	printf( "\n" );

	printf( "请输入你要插入的值:" );
	int insert_num;
	scanf( "%d", &insert_num );
	arr[count] = insert_num;
	printf( "insert_num=%d\n", insert_num );
	printf( "arr[%d]=%d\n", count, insert_num );
	printf( "------------插入后-------------\n" );
	for( int i = 0; i < 5; i++ ) {
		printf( "%d\t", arr[i] );
	}
	printf( "\n" );
	
	return 0;
}
