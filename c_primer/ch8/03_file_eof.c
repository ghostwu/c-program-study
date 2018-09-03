#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	
	int ch;
	FILE *fp;
	char filename[20];
	printf( "pls input filename\n" );
	scanf( "%s", filename );
	fp = fopen( filename, "r" );
	if( NULL == fp ) {
		printf( "failed to open file, bye\n" );
		exit( 1 );
	}
	while( ( ch = getc( fp ) ) != EOF ){
		putchar( ch );
	}
	fclose( fp );

	return 0;
}
