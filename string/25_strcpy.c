/*
 * 拷贝字符串到源字符串的指定位置
 */

#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main( void ) {

	char* src = WORDS;
	char dst[SIZE] = "be the best that you can be.";
	char *p_dst;

	puts( src );
	puts( dst );
	p_dst = strcpy( dst + 7, src );
	puts( dst );
	//p_dst指向的地址为: dst+7
	puts( p_dst );
	return 0;
}
