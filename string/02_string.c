/*
 * 把字符串看做指针
 * 1，字符串属于静态存储类别,字符串只会被存储一次,即使函数被调用多次(如果在函数中使用字符串常量.
 * 2，用双引号括起来的内容被视为指向该字符串存储位置的指针
 */

#include <stdio.h>

int main( void ){
	printf( "%s %p %c\n", "We", "are", *"space farers" );
}
