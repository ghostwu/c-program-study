#include <stdio.h>
/*
 * 使用fprintf 把信息格式化　写入文件
 */
int main( void ) {
	FILE *stream;
	stream = fopen( "user.txt", "w" );
	fprintf( stream, "%s, %s, %d, %s, %.2f\n", "ghostwu", "男", 20, "full stack programer", 1.72 );
	return 0;
}


