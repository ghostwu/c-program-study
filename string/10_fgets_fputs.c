#include <stdio.h>
#include <string.h>
#define LEN 10

int main( void ){
	char words[LEN];
	puts( "Enter String( empty line to quit! )" );
	while( fgets( words, LEN, stdin ) != NULL && words[0] != '\n' ){
		printf( "----------" ); //标记读取的过程
		fputs( words, stdout );
		//最后一次,如果不足10个字节,会存储换行符
		//如 hello,baby!where are you going?
		//hello,bab( 9个字符+\0)
		//y!where a+\0
		//re you go+\0
		//ing?+\n+\0
		printf( "%lu", strlen( words ) );
	}
	puts( "done" );
	return 0;
}
