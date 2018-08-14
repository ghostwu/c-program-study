#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {
	
	FILE *stream;

	system( "echo \"username:ghostwu\" > fgets_userinfo.txt" );
	system( "echo \"password:abc123\" >> fgets_userinfo.txt" );

	stream = fopen( "fgets_userinfo.txt", "r" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	char buff[256];
	while( fgets( buff, 256, stream ) != NULL ){
		printf( "%s", buff );
	}
	
	fclose( stream );

	return 0;
}
