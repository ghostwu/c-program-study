/*
 * 分配连续的存储空间
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	
	int *score;
	int num;
	float avg;
	int sum = 0;
	
	printf( "请输入学生个数\n" );
	scanf( "%d", &num );
	score = ( int* )malloc( sizeof( int ) * num );
	if( NULL == score ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}
	
	int i = 0;
	for( i = 0 ; i < num ; i++ ){
		printf( "请输入%d个学生的成绩\n", ( i + 1 ) );
		//scanf( "%d", &score[i] );
		scanf( "%d", ( score + i ) );
		sum += *( score + i );
	}

	printf( "平均成绩%.2f\n", (float)sum / (float)num );

	return 0;
}

