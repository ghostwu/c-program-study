#include <stdio.h>
#include <string.h>

#define ANSWER "Ghostwu"
#define SIZE 40

char* s_gets( char* dst, int n );

int main( void ) {
	
	char try[SIZE];
	puts( "pls input your name?" );
	s_gets( try, SIZE );
	while( strcmp( try, ANSWER ) ) {
		puts( "No, that's wrong. Try again." );
		s_gets( try, SIZE );
	}
	puts( "that's right" );
	
	return 0;
}

char* s_gets( char* dst, int n ){
	char* p_dst;
	int i = 0;
	p_dst = fgets( dst, n, stdin );
	if( p_dst ) {
		while( dst[i] != '\0' && dst[i] != '\n' ) i++;
		if( dst[i] == '\n' ) {
			dst[i] = '\0';
		}else{
			while( getchar() != '\n' )
				continue;
		}
	}
	return p_dst;
}
