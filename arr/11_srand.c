#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//随机数种子, 根据当前时间戳,每次执行都产生不同的初始值[种子](seed)
	//那么生成的随机数字 就是随机的
	srand( time( NULL ) );	
	printf( "%d\n", rand() % 10 );
}
