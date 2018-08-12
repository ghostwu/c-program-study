/**************************文件包含**********************
文件包含(include)
#include，它可以将一个文件的全部内容拷贝另一个文件中。
格式:
	1、第1种形式#include　<文件名>
	直接到C语言库函数头文件所在的目录中寻找文件
	2、第2种形式 #include　"文件名"
	系统会先在源程序当前目录下寻找，若找不到，再到操作系统的path路径中查找，最后才到C语言库函数头文件所在目录中查找
***************************文件包含**********************/
#include <stdio.h>
#include "one.h"
#include "two.h"

//生成预编译文件: gcc -E 06_include_file_usage.c -o 06_include_file_usage.i

int main( void ) {
	one();
	two();
	return 0;
}

void one() {
	printf( "one\n" );
}

void two() {
	printf( "two\n" );
}


