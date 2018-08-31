#include <stdio.h>
#include <string.h>

int main( void ) {

	printf( "strcmp(\"A\", \"A\") = %d\n", strcmp( "A", "A" ) );
	printf( "strcmp(\"B\", \"A\") = %d\n", strcmp( "B", "A" ) );
	printf( "strcmp(\"C\", \"A\") = %d\n", strcmp( "C", "A" ) );
	printf( "strcmp(\"A\", \"B\") = %d\n", strcmp( "A", "B" ) );
	printf( "strcmp(\"apples\", \"apple\") = %d\n", strcmp( "apples", "apple" ) );

	return 0;
}
