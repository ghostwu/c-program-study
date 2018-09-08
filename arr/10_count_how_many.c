/*
 * 在之前的程序中,找0-9出现的次数,每次都要从头到尾找一次
 * 总共循环 1000000次, 浪费性能
 * 只需要循环 100000次, 一遍就能计算出所有数字出现的次数
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100000
int a[N];

void gen_num(){
	int i = 0;
	for( i = 0 ; i < N ; i++ ){
		a[i] = rand() % 10;
	}
}

int main( void ) {
	gen_num();
	//histogram:直方图
	int histogram[10] = { 0 };
	int i = 0;
	for( i = 0 ; i < N; i++ ){
		histogram[a[i]]++;
	}
	for( i = 0; i < 10; i++ ){
		printf( "%d-------------->%d\n", i, histogram[i] );
	}
}
