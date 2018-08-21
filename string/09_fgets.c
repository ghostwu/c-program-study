#include <stdio.h>
#define LEN 14

int main( void ) {
	char str[LEN];
	printf( "pls input string\n" );
	fgets( str, LEN, stdin );
	printf( "str=%s", str );
	//puts( str );
	fputs( str, stdout );

	fgets( str, LEN, stdin );
	printf( "str=%s", str );
	//puts( str );
	fputs( str, stdout );
	return 0;
}
