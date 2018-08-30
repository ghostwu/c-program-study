/*
 * connect two string
 */
#include <stdio.h>
#include <string.h>

#define SIZE 80
char* s_gets( char *str, int n );

int main( void ) {
	char buf[SIZE];
	char name[] = "my name is ghostwu";
	puts( "print some infomation" );

	if( s_gets( buf, SIZE ) ){
		strcat( buf, name );
		//what's your name?
		puts( buf );
		puts( name );
	}else{
		puts( "puts encounter an error" );
	}

	return 0;
}

char* s_gets( char *str, int n ) {
	char *p_str;
	int i = 0;

	p_str = fgets( str, n, stdin );
	if( p_str ) {
		while( str[i] != '\0' && str[i] != '\n' ) i++;
		if( str[i] == '\n' ) {
			str[i] = '\0';
		}else {
			while( getchar() != '\n' )
				continue;
		}
	}
	return p_str;
}


