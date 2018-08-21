/*
 * gets的缺点: 获取输入的字符串,无法计算字符串的长度，容易造成缓冲区溢出
 * 缓冲区溢出指的是: 字符串超过设定的长度, 超出的部分就会覆盖其他的内存地址中的内容，如果这部分地址没用使用，暂时没有问题，如果是已经存储了内容，那么就会擦除这部分，造成程序异常
 * 段错误 指的是不合法的修改某个内存区域
 */

#include <stdio.h>
#define LEN 20

int main( void ){
	char words[LEN];
	gets( words ); //如果超过20个字符,会造成缓冲区溢出
	printf( "%s\n", words );
	puts( words );
	return 0;
}
