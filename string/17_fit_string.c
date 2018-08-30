/*
 * 调整字符串为指定长度
 */
#include <stdio.h>
#include <string.h>

void fit( char *string, unsigned int size );

int main( void ) {
	
	char greeting[] = "Welcome to Beijing,China, There are many goods place in china!";

	puts( greeting );
	fit( greeting, 25 );
	puts( greeting );
	puts( "----after fit----\n" );
	puts( greeting + 26 );

	return 0;
}

void fit( char *string, unsigned int size ) {
	if( strlen( string ) > size ) {
		string[size] = '\0';
	}
}
