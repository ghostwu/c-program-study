/*
 * 打印直方图
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//随机数个数
#define N 20
//0-9之前的数
#define BOUND 10

int arr[N];

//生成随机数字
void gen_num(){
	srand( time( NULL ) );
	int i = 0;
	for( i = 0 ; i < N ; i++ ){
		arr[i] = rand() % BOUND;
	}
}

//打印随机数数组
void print_arr( int a[], int n ) {
	int i = 0;
	for( i = 0 ; i < n ; i++ ){
		printf( "arr[%d]----------------->%d\n", i, a[i] );
	}
}

//统计随机数出现的次数
int* how_many( int histogram[] ){
	int i = 0;
	for( i = 0 ; i < N ; i++ ){
		histogram[arr[i]]++;	
	}
	return histogram;
}

void print_sperator( char *s ) {
	printf( "================================%s================================\n", s );
}

//打印随机数出现的次数
void print_historgram_detail( int res[] ) {
	int i = 0;
	for( i = 0 ; i < BOUND; i++ ){
		printf( "res[%d]----------->%d\n", i, res[i] );
	}
}

//找出次数最大的值
int max( int histogram[] ) {
	int m = 0;
	for( int i = 0 ; i < BOUND ; i++ ) {
		if( histogram[i] > m ) m = histogram[i];
	}
	return m;
}

//打印直方图
void print_histogram( int histogram[] ){
	int i = 0;
	for( i = 0 ; i < BOUND ; i++ ) {
		printf( "%d\t", i );
	}
	putchar( '\n' );
	int max_times = max( histogram );
	for( i = 1 ; i <= max_times; i++ ) {
		for( int j = 0 ; j < BOUND ; j++ ) {
			//如果次数大于等于当前行
			if( histogram[j] >= i ) {
				printf( "%s\t", "*" );
			}else{
				printf( "%s\t", "" );
			}
		}
		putchar( '\n' );
	}
}

int main( void ) {
	gen_num();
	print_sperator( "打印生成的随机数" );
	print_arr( arr, N );
	print_sperator( "打印统计次数" );
	int res[BOUND] = { 0 };
	how_many( res );
	print_historgram_detail( res );
	print_sperator( "打印直方图" );
	print_histogram( res );
}
