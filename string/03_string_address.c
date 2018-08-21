#include <stdio.h>
#define MSG "I'm special"

int main( void ) {
	char arr[] = MSG;
	const char *pt = MSG;
	printf( "address of \"I'm special:\" %p \n", "I'm special" );
	printf( "address of arr: %p\n", arr );
	printf( "address of pt: %p\n", pt );
	printf( "address of MSG: %p\n", MSG );
	printf( "address of \"I'm special:\" %p \n", "I'm special" );
	return 0;
}
