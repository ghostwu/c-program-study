#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

char* s_gets( char* st, int n );

int main( void ) {
	
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	char bug[BUGSIZE];
	int available;

	puts( "what's your favorite flower?" );
	s_gets( flower, SIZE );
	if( strlen( flower ) + strlen( addon ) - 1 <= SIZE )
		strcat( flower, addon );
	puts( flower );
	puts( "what's your favorite bug?" );
	s_gets( bug, BUGSIZE );
	available = BUGSIZE - strlen( bug ) - 1;
	strncat( bug, addon, available );
	puts( bug );

	return 0;
}

char* s_gets( char* dst, int n ){
	char *p_dst;
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
