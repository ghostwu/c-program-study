#include <stdio.h>
#include <string.h>

int main( void ) {
	char buffer[64];
	char *str = "Hi, Ghostwu!";

	char *dst = strcat( buffer, str );

	printf( "buffer=%s\n", buffer );
	printf( "dst=%s\n", dst );
	return 0;
}
