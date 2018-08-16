#include <stdio.h>

int main( void ) {
	int arr[] = { 8, 4, 2, 1, 23, 344, 12 };
	printf( "------------开始输出---------------\n" );
	int sum = 0;
	double avg = 0;
	for( int i = 0; i < sizeof( arr ) / sizeof( int ); i++ ) {
		sum += arr[i];
		printf( "arr[%d]=%d\n", i, arr[i] );
	}
	avg = (double)sum / (double)( sizeof( arr ) / sizeof( int ) );
	
	printf( "该数列每一项的和为:%d, 平均值为:%.2lf\n", sum, avg );

	printf( "请输入一个数,判断这个数是不是在该数列中\n" );
	int num;
	scanf( "%d", &num );
	int flag = 0;
	for( int i = 0; i < sizeof( arr ) / sizeof( int ); i++ ) {
		if( num == arr[i] ) {
			flag = 1;
			break;
		}
	}
	if( flag == 0 ) {
		printf( "%d不在数列中\n", num );
	}else{
		printf( "%d在数列中\n", num );
	}

	return 0;
}

