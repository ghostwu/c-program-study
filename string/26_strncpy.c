#include <stdio.h>
#include <string.h>

#define SIZE 40
#define LIMIT 5
#define TARGETSIZE 6

char* s_gets( char* dst, int n );

int main( void ) {

	char q_words[LIMIT][TARGETSIZE];
	char temp[SIZE];
	int i = 0;
	printf( "请输入q开头的单词\n");
	while( i < LIMIT && s_gets( temp, SIZE ) ) {
		if( temp[0] != 'q' ) {
			printf( "%s 不是以q开头\n", temp );
		}else {
			strncpy( q_words[i], temp, TARGETSIZE - 1 );	
			q_words[i][TARGETSIZE - 1] = '\0';
			i++;
		}
	}
	printf( "输出这%d个单词\n", i );

	for( i = 0 ; i < LIMIT; i++ ){
		puts( q_words[i] );
	}
	return 0;
}

char* s_gets( char* dst, int n ) {
	char* p_dst;
	int i = 0;
	p_dst = fgets( dst, n, stdin );	
	if( p_dst ) {
		while( dst[i] != '\n' && dst[i] != '\0' ) i++;
		if( dst[i] == '\n' ) {
			dst[i] = '\0';
		}else{
			while( getchar() != '\n' ) continue;
		}
	}
	return p_dst;
}
