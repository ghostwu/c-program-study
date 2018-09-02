#include <stdio.h>
#include <string.h>
#define LISTSIZE 6

int main( void ) {
	const char* list[LISTSIZE] = {
		"astronomy", "astounding",
		"astrophysics", "ostracize",
		"asterism", "astrophobia"
	};

	int count = 0;
	for( int i = 0; i < LISTSIZE; i++ ) {
		if( strncmp( list[i], "astro", 5 ) == 0 ){
			printf( "找到%s\n", list[i] );
			++count;
		}
	}
	printf( "一共有%d个\"astro\"开头的单词\n", count );
	
	return 0;
}
