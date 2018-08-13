#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {
	
	FILE *stream;
	stream = fopen( "poetry.txt", "r" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}

	int offset = 0;
	char poetry_name[10];
	fscanf( stream, "%9s", poetry_name );
	printf( "%s\n", poetry_name );
	offset += strlen( poetry_name );

	char poetry_author[13];
	fscanf( stream, "%13s", poetry_author );
	printf( "%s\n", poetry_author );
	offset += strlen( poetry_author );

	char poetry_body[32];
	int i = 0;
	int size = 0; //文件大小
	fseek( stream, 0, SEEK_END );
	size = ftell( stream );
	fseek( stream, ++offset, SEEK_SET );
	while( offset < size ){
		fscanf( stream, "%32s", poetry_body );
		if( i % 2 == 0 )
			printf( "%s", poetry_body );
		else
			printf( "%s\n", poetry_body );
		i++;
		// +1: 跳过文件中的空白(空格,制表,回车)符
		offset += strlen( poetry_body) + 1;
		if( offset + 1 == size ) break;
		fseek( stream, offset, SEEK_SET );
	}

	fclose( stream );
	return 0;
}
