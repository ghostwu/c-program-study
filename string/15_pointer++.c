#include <stdio.h>

int main( void ) {
	/*
	const char *str = "ghostwu";
	printf( "init address:%p\n", str );
	printf( "=============================\n" );
	*/

	/*
	while( *str != '\0' ){
		printf( "%p\n", str++ );
	}
	*/

	/*
	while( *str != '\0' ) {
		//printf( "%c", *(str++) );
		printf( "%c", *str++ );
	}
	*/

	/*
	const char str[] = "ghostwu";
	int i = 0;
	while( str[i] != '\0' ) {
		putchar( str[i++] );
	}
	*/


	const char *str = "ghostwu";
	while( *str ) { //这种写法 相当于 *str != '\0'
		printf( "%c", *str++ );
	}

	putchar( '\n' );
}
