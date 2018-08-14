#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main( void ) {

	printf( "请输入用户名:" );
	char username[256];
	fgets( username, 256, stdin );

	printf( "请输入密码:" );
	char userpwd1[256];
	fgets( userpwd1, 256, stdin );

	printf( "请再次输入密码:" );
	char userpwd2[256];
	fgets( userpwd2, 256, stdin );

	FILE *stream;
	if(	strcmp( userpwd1, userpwd2 ) == 0 ) {
		stream = fopen( "62.txt", "ab" );
		if( NULL == stream ) {
			fprintf( stderr, "fopen: %s\n", strerror( errno ) );
			exit( EXIT_FAILURE );
		}
		fprintf( stream, "username:%s", username );
		fprintf( stream, "password:%s", userpwd1 );
		fclose( stream );
	}else{
		printf( "两次密码输入不一致,错误\n" );	
	}

	return 0;
}

