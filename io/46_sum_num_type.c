#include <stdio.h>
#include <ctype.h>

int read_int(){
	int c;
	int res = 0;
	while( ( c = getchar() ) != EOF && isdigit( c ) ){
		res += c - '0';	
	}
	if( c != EOF ){
		ungetc( c, stdin );
	}
	return res;
}

int main( void ) {
	printf( "请输入一串整数\n" );
	int res = read_int();
	printf( "res=%d\n", res );
	printf( "缓冲区的下一个字符%c\n", getchar() );
	return 0;
}

