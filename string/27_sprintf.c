/*
 * 格式化字符串
 */

#include <stdio.h>
#define MAX 20

char* s_gets( char* dst, int n );

int main( void ) {
	char first[MAX];
	char last[MAX];
	char formal[ 2 * MAX + 10 ];
	puts( "请输入名字" );
	s_gets( first, MAX );
	puts( "请输入姓" );
	s_gets( last, MAX );
	double money;
	puts( "请输入你的家产" );
	scanf( "%lf", &money);
	sprintf( formal, "%s %-19s %6.2f", first, last, money );
	printf( "%s\n", formal );
	return 0;
}
char* s_gets( char* dst, int n ){
	char* p_dst;
	int i = 0;
	p_dst = fgets( dst, n, stdin );
	if( p_dst  ){
		while( dst[i] != '\0' && dst[i] != '\n' ) i++;
		if( dst[i] == '\n' ) {
			dst[i] = '\0';
		}else{
			while( getchar() != '\n' ) continue;
		}
	}
	return p_dst;
}
