/*
 * 简单的结构体应用
 */

#include <stdio.h>

#define N 3

typedef struct score {
	int id;
	int math;
	int english;
	int computer;
}SCORE;

void print_score( SCORE *p, int n ) {
	int i = 0;
	for( i = 0 ; i < n ; i++ ){
		printf( "%d\t%d\t%d\t%d\t\n", ( p + i )->id,
			( p + i )->math, ( p + i )->english, ( p + i )->computer );
	}
}

int main( void ){
	SCORE s[N];
	int i;
	for( i = 0 ; i < N ; i++ ) {
		printf( "请输入第%d个人的数学,英语,计算机成绩\n", ( i + 1 ) );
		scanf( "%d %d %d %d", &s[i].id, &s[i].math, &s[i].english, &s[i].computer );
	}
	SCORE *p = s;
	print_score( p, N );
	return 0;
}
