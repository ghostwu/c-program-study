#include <stdio.h>
/*
 * 1, puts输出的时候带空行
 * 2, puts碰到\n停止输出，如果没有\n，一直往后读，直到碰到\n
 */

int main( void ) {
	
	//char dont[] = { 'W', 'O', 'W', '!' };
	//char dont[] = { 'W', 'O', 'W', '!', '\0' };
	//puts( dont );
	

	char side_a[] = "side a";
	char dont[] = { 'W', 'O', 'W', '!' };
	char side_b[] = "side b";
	puts( dont );

	return 0;
}
