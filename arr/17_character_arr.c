#include <stdio.h>
#include <string.h>

int main( void ) {
	//方法1
	char greeting[20] = "Hello,Ghostwu";
	printf( "%c\n", greeting[0] );
	printf( "len=%lu\n", strlen( greeting ) );

	//方法2
	char greeting2[20] = { 'H','e', 'l', 'l', 'o', ',', 'G', 'h', 'o', 's', 't', 'w', 'u', '\0' };
	printf( "%c\n", greeting2[0] );
	printf( "len=%lu\n", strlen( greeting2 ) );
	return 0;
}
