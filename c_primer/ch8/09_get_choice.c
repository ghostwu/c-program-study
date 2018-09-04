#include <stdio.h>

char get_choice( void );

int main( void ){
	get_choice();
	return 0;
}
char get_choice( void ){
	int ch;
	printf( "请做出你的选择\n" );
	printf( "a、advice					b、bell\n" );
	printf( "c、count 					d、quit\n" );
	ch = getchar();
	while( ( ch < 'a' || ch > 'c' ) && ch != 'q' ){
		printf( "请输入a,b,c,q中的任意一个字母\n" );	
		ch = getchar();
		while( getchar() != '\n' ) {
			continue;
		}
	}
	return ch;
}

