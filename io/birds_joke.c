/*
 * 打鸟逻辑测试
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main ( void ) {
	printf( "\n请输入回车查看下面的笑话\n\n" );
	printf( "某日，老师在课堂上想看看一学生智商有没有问题\n" );
	
	FILE *fp;
	fp = fopen( "birds.txt", "r" );
	if( NULL == fp ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}

	char *line_buffer = NULL; //缓冲区
	size_t buffer_len = 0; //缓冲区大小
	ssize_t ch_num = 0; //读取到的字符个数
	int line_count = 0; //行数

	while( ( ch_num = getline( &line_buffer, &buffer_len, fp ) ) > 0 ) {
		getchar();
		line_count++;
		if( line_count % 2 == 0 ) {
			printf( "男孩说: " );
		}else{
			printf( "老师说: " );
		}
		printf( "%s", line_buffer );
	}

	if( line_buffer ) {
		free( line_buffer );
	}

	return 0;
}






