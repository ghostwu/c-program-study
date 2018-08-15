#include <stdio.h>

int main( void ) {
	char buff[5];
	for( int i = 0; i < 4; i++ ) {
		//缓冲区溢出, 空格会被读取
		//scanf( "%c", &buff[i] );
		//前面加一个空格就可以解决	
		scanf( " %c", &buff[i] );
	}
	for( int i = 0; i < 4; i++ ) {
		printf( "%c,", buff[i] );
	}
	return 0;
}
