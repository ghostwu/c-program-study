#include <stdio.h>

int main( void ) {
	int guess = 1;
	char res;
	printf( "当出现问题时,只能回答y或者n\n" );
	printf( "你的数字是否为%d\n", guess );
	while( ( res = getchar() ) != 'y' ){
		if( res == 'n' ) {
			printf( "你的数字是否为%d\n", ++guess );
		}else{
			printf( "我只能识别字母y或者n\n" );
		}
		//处理[丢弃]缓冲区其他的字符
		while( getchar() != '\n' ) continue;
	}
	printf( "you are right\n" );
	return 0;
}
