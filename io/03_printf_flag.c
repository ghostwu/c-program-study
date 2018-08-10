#include <stdio.h>
/*
 * flag: 标志符，用于规定输出格式
 * 标志符: -、+、空格、#、0
 */
int main( void ) {
	
	// -: 左对齐
	int postcode = 518000;
	printf( "邮编:%-10d\n", postcode );
	//默认右对齐,左边补空格
	printf( "邮编:%10d\n", postcode );
	//如果出现0，忽略0
	printf( "区号:%0d\n", 123 );
	printf( "%-50s", "c语言是一门非常灵活、强大的语言!\n" );
	printf( "%50s", "c语言是一门非常灵活、强大的语言!\n" );

	// + 在前面填充一个+号
	printf( "%+3d\n", 123 );
	printf( "%3d\n", 123 );

	// 0 在前面填充0
	printf( "%10d\n", 123 );	
	printf( "%010d\n", 123 );	

	/*
	 * #: 加前缀
	 * 对o, x, X时，加前缀 0 0x 0X
	 */
	printf( "%#x\n", 10 );
	printf( "%#X\n", 10 );
	
	// \x开头代表16进制 \x41就是A 数值为十进制的65
	// %o: 八进制显示
	int c = '\x41';
	printf( "%#x, %#o\n", c, c );
	printf( "%#X, %#o\n", c, c );

	return 0;
}
