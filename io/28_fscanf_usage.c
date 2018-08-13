#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main( void ) {
	FILE *stream;
	stream = fopen( "fscanf.out", "w+" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	fprintf( stream, "%s%ld%f%c", "ghostwu", 301234512L, 54.2, 'M' );
	
	//将文件指针移动到文件头部,读取文件
	fseek( stream, 0, SEEK_SET );
	
	//从文件中读取数据
	char s[32];
	fscanf( stream, "%7s", s ); 
	
	long money;
	fscanf( stream, "%9ld", &money );

	float f;
	fscanf( stream, "%f", &f );
	
	char sex;
	fscanf( stream, "%c", &sex );

	printf( "%s\n%9ld\n%3.1f\n%c\n", s, money, f, sex );

	return 0;
}
