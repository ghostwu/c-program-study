#include <stdio.h>
#include <string.h>

int main( void ) {
	char *str = "call me ghostwu!";
	int i = 0;
	for( i = 0; i < strlen( str ); i++ ){
		fputc( str[i], stdout );
	}
	fputc( '\n', stdout );

	return 0;
}
