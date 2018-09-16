/*
 * void* 通用指针
 */

#include <stdio.h>

void set( void *p ) {
	char *pc = p;
	*pc = 'G';
}

int main( void ) {
	char c;
	set( &c );
	printf( "%c\n", c );
}
