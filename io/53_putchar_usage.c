#include <stdio.h>

int main ( void ) {
	
	char ch = 'A';
	putchar( ch );
	putchar( '\x41' );
	putchar( 0x41 );

	return 0;
}

