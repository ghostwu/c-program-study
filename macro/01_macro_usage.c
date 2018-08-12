/**************************宏定义的基本用法**********************
1、C语言在对源程序进行编译之前，会先对一些特殊的预处理指令作解释(比如#include文件包含指令)，产生一个新的源程序(这个过程称为编译预处理),之后再进行通常的编译
2、为了区分预处理指令和一般的C语句，所有预处理指令都以符号"#"开头，并且结尾不用分号
3、预处理指令可以出现在程序的任何位置，它的作用范围是从它出现的位置到文件尾。习惯上我们尽可能将预处理指令写在源程序开头，这种情况下，它的作用范围就是整个源程序文件
4、C语言提供的预处理指令主要有：宏定义、文件包含、条件编译

宏定义可以分为2种：不带参数的宏定义 和 带参数的宏定义
备注:
1、宏定义不涉及存储空间的分配、参数类型匹配、参数传递、返回值问题
2、函数调用在程序运行时执行，而宏替换只在编译预处理阶段进行。所以带参数的宏比函数具有更高的执行效率
格式:
#define 宏名(参数列表) 字符串
**************************宏定义的基本用法**********************/

#include <stdio.h>
#define AVE( a, b ) ( a + b ) / 2

int main( void ) {
	int i = AVE( 10, 20 );
	printf( "i = %d\n", i );
	return 0;
}

