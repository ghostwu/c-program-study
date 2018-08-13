#include <stdio.h>

void safe_flush( FILE *stream ) {
	int ch;	
	//使用循环把缓冲区的读完,直到读到缓冲区的\n或者是空值
	//使用流的方式,把剩余的东西一并读完,管他是不是\n
	while( ( ch = fgetc( stream ) ) != EOF && ch != '\n' );
}

int main( void ) {
	
	int i;
	printf( "请输入一个整数\n" );
	scanf( "%d", &i );
	
	//清空标准输入stdin 中的缓冲内容
	safe_flush( stdin );

	char ch;
	printf( "请输入一个字符\n" );
	scanf( "%c", &ch );
	
	printf( "---------%d---------\n", i );
	printf( "---------%c---------\n", ch );

	return 0;
}
