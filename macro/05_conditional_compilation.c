/**************************条件编译**********************
一、什么是条件编译:
	我们希望程序的其中一部分代码只有在满足一定条件时才进行编译，否则不参与编译(只有参与编译的代码最终才能被执行)，这就是条件编译 
提示：
#if 和 #elif后面的条件一般是判断宏定义而不是判断变量，因为条件编译是在编译之前做的判断，宏定义也是编译之前定义的，而变量是在运行时才产生的、才有使用的意义
***************************条件编译**********************/

#include <stdio.h>
#define FLAG 1

#ifndef FLAG 
	#define DESC "FLAG宏未定义"
#endif

#ifdef FLAG
	#define DESC "已经定义过FLAG"
#endif

#if FLAG == 1
	#define NAME "ghostwu"
#elif FLAG == 0
	#define NAME "wukong"
#else
	#define NAME "bajie"
#endif

int main( void ) {
	printf( "%s\n", DESC );
	//printf( "%s\n", NAME );
	return 0;
}

