/*
 * 字符串数组与指向字符串的指针数组
 */

#include <stdio.h>
#define SLEN 40
#define LIM 5

int main( void ) {
	
	const char *mytalents[LIM] = {
		"I want to talk you",
		"but I'dont",
		"Do you love me",
		"Yes",
		"me too"
	};

	char yourtalents[LIM][SLEN] = {
		"baby, i want talk with you",
		"can you give me one time",
		"ready go",
		"where are your going",
		"i want to north east"
	};

	for( int i = 0; i < LIM; i++ ){
		printf( "%s\n", mytalents[i] );
	}
	puts( "---------------------------" );
	for( int i = 0; i < LIM; i++ ){
		printf( "%s\n", yourtalents[i] );
	}
	puts( "---------------------------" );
	
	printf( "sizeof(mytalents)=%lu, sizeof(yourtalents)=%lu\n", sizeof( mytalents ), sizeof( yourtalents ) );

	return 0;
}
