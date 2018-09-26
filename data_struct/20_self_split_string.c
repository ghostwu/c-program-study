/*
 * 按空格分割字符串
 */

#include <stdio.h>

int token( char* str1, char* str2, int pos ) {
	int i, j;
	i = pos;
	while ( str1[i] == ' ' )  //跳过多余的空格
		i++;
	if( str1[i] != '\0' ) {
		j = 0;
		while( str1[i] != '\0' && str1[i] != ' ' ){
			str2[j] = str1[i];
			i++;
			j++;
		}
		str2[j] = '\0';
		return i;
	}else {
		return -1;
	}
}

int main( void ) {

	char string1[100] = "this is a book, it's on the desk";
	char string2[20];

	int pos = 0;

	while( ( pos = token( string1, string2, pos ) ) != -1 ) {
		printf( "分割的字符串%s\n", string2 );		
	}

	return 0;
}
