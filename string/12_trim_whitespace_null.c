/*
 * 去除回车换行和空字符
 */

#include <stdio.h>
#define LEN 10

int main( void ) {
	char words[LEN];
	int i = 0;
	while( fgets( words, LEN, stdin ) != NULL && words[i] != '\n' ){
		i = 0;
		while( words[i] != '\n' && words[i] != '\0' ) i++;
		//先碰到空字符
		if( words[i] == '\0' ) {
			while( getchar() != '\n' ){
				continue;
			}
		}else { //碰到回车换行符号\n
			words[i] = '\0';	
		}
		puts( words );
	}

	return 0;
}
