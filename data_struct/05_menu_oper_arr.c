/*
 * 通过菜单选项操作数组
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

void print_arr( int a[], int n ) {
	int i = 0;
	for( i = 0 ; i < n ; i++ ){
		printf( "%d\t", a[i] );
	}
	putchar( '\n' );
}

int main( void ) {
	
	int score[N] = { 76, 30, 25, 80, 44, 66, 77, 98, 100, 56 };
	int choice, index;

	while( 1 ) {
		printf( "请输入选项\n" );
		printf( "1、查询学生成绩\n" );
		printf( "2、修改学生成绩\n" );
		printf( "3、退出系统\n" );
		scanf( "%d", &choice );
		if( choice != 3 ) {
			printf( "请输入学生的索引[0-%d]\n", N );
			scanf( "%d", &index );
		}
		switch( choice ){
			case 1:
				if( index > N || index < 0 ) break;
				printf( "第%d个学生的成绩是%d\n", ( index + 1 ), score[index] );
				break;
			case 2:
				if( index > N || index < 0 ) break;
				printf( "请输入%d个学生的新成绩\n", ( index + 1 ) );	
				scanf( "%d", &score[index] );
				printf( "修改之后的结果为:\n" );
				print_arr( score, N );
				break;
			case 3:
				exit( 0 );
				break;
		}
	}
	return 0;
}
