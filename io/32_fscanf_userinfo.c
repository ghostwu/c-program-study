#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main( void ) {

	FILE *stream;
	stream = fopen( "userinfo.output", "w+" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	char name[10];
	int age;
	double money;
	char sex[5];
	char identify[32];
	memset( identify, 0, 32 );
	memset( sex, 0, 5 );
	memset( name, 0, 10 );
	
	fprintf( stream, "%s,%s,%s,%d,%lf", "ghostwu", "M", "351234198001053012", 20, 190000002.34f );
	fprintf( stream, "%c", '\n' );
	fprintf( stream, "%s,%s,%s,%d,%lf\n", "wukong", "M", "452626198001053012", 200, 10002.34f );
	fseek( stream, 0L, SEEK_SET );
	fscanf( stream, "%7s,%1s,%18s,%d,%lf", name, sex, identify, &age, &money );
	printf( "%s,%s,%s,%d,%lf\n", name, sex, identify, age, money );

	fscanf( stream, "%6s,%1s,%18s,%d,%lf", name, sex, identify, &age, &money );
	printf( "%s,%s,%s,%d,%lf\n", name, sex, identify, age, money );

	fclose( stream );
	return 0;
}

