#include <stdio.h>

long get_long( void );

int main ( void ) {
	printf( "%ld\n", get_long() );
	return 0;
}

long get_long( void ){	
	char ch;
	long input;
	while( scanf( "%ld", &input ) != 1 ){
		while( ( ch = getchar() ) != '\n'  ) {
			putchar( ch );
		}
		printf( "不是一个整数\n" );
		printf( "请输入一个整数:如1,3,5,-1,-3,-5\n" );
	}
	return input;
}
