#include <stdio.h>
/*
 * 输入一个字符,判断这个字符　是数字还是字母,还是其他类型
 */

#define 	NUM_TYPE 		0 //数字
#define 	CHAR_TYPE 		1 //字母
#define 	OTHER_TYPE 		2 //其他

int check_input_type( char ch ) {
	if( ch >= '0' && ch <= '9' ) {
		return NUM_TYPE;
	}else if( ( ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z') ) {
		return 	CHAR_TYPE;
	}
	return OTHER_TYPE;
}

int main( void ) {
	
	printf( "请输入一个字符\n" );
	char ch;
	scanf( "%c", &ch );
	int type = check_input_type( ch );
	switch( type ) {
		case NUM_TYPE:
			printf( "数字类型\n" );
			break;
		case CHAR_TYPE:
			printf( "字母类型\n" );
			break;
		default:
			printf( "其他类型\n" );
	}
	return 0;
}

