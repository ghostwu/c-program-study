#include <stdio.h>

int main( void ) {
	
	int i;
	/*
	 * 当我们输入一个整数,比如20,然后回车
	 */
	printf( "请输入一个整数\n" );
	scanf( "%d", &i );

	char ch;
	//　由于上面的是%d,　回车不会被%d接收，还在缓冲区中
	//  所以这里的ch直接读取到了上次的回车键, 程序直接
	//  跳过这段输入
	printf( "请输入一个字符\n" );
	scanf( "%c", &ch );
	
	//执行这里的输出
	printf( "---------%d---------\n", i );
	//打印两次　回车换行的效果, 因为ch存储的是回车
	printf( "---------%c---------\n", ch );

	return 0;
}
