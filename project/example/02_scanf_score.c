#include <stdio.h>
#define N 5

int main( void ) {
	
	double score[N];
	for( int i = 0; i < 5; i ++ ){
		printf( "请输入第%d个学生的成绩:", ( i + 1 ) );
		scanf( "%lf", &score[i] );
	}

	printf( "----------您输入的5个学生成绩如下--------------\n" );
	for( int i = 0; i < 5; i++ ){
		printf( "%-10.2lf", score[i] );
	}

	putchar('\n');
	return 0;
}
