#include <stdio.h>

void safe_flush( FILE* stream ) {
	int ch;
	while( ( ch = getchar() ) != EOF && ch != '\n' );
}

int main( void ) {
	int a, b;
	/*
	 * 比如第一次输入100 200 300
	 * 输出a=100 b=200, 但是300还在缓冲区
	 * 第二次输入1直接回车
	 * a=300(取到之前的300) b=1
	 */
	/*
	while( fscanf( stdin, "%d %d", &a, &b ) == 2 ){
		printf( "a=%d, b=%d\n", a, b );	
	}
	*/
	while( fscanf( stdin, "%d %d", &a, &b ) == 2 ){
		safe_flush( stdin ); //清空缓冲区
		printf( "a=%d, b=%d\n", a, b );	
	}
	return 0;
}
