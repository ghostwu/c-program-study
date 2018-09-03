#include <stdio.h>

void display( char c, int rows, int cols );

int main( void ) {
	int ch;
	int rows, cols;
	printf( "请输入一个字符,两个数字\n" );

	while( ( ch = getchar() ) != '\n' ) {
		if( scanf( "%d %d", &rows, &cols ) != 2 ) {
			break;
		}
		display( ch, rows, cols );	
		//getchar读取缓冲区多余的字符,包括空格
		while( getchar() != '\n' ) {
			continue;
		}
		printf( "请输入一个字符,两个数字\n" );
		printf( "输入回车键退出程序\n" );
	}
	printf( "Bye\n" );
	
	return 0;
}

void display( char c, int rows, int cols ) {
	for( int i = 1; i <= rows; i++ ){
		for( int j = 1; j <= cols; j++ ){
			putchar( c );
		}
		putchar( '\n' );
	}
}
