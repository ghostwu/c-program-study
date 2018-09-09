#include <stdio.h>

int main( void ) {
	char days[8][10] = {
		"",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};
	for( int i = 0 ; i < 8 ; i++ ) {
		if( i == 0 ) continue;
		printf( "%s\n", days[i] );
	}
	return 0;
}
