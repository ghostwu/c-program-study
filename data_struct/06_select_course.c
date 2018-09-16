/*
 * 根据星期几, 第几节课 查询课程名
 */
/*
 * 0, 没有课程
 * 1, c语言
 * 2, 数据结构与算法
 * 3, php课程
 * 4, mysql数据库
 * 5, linux运维
 */
#include <stdio.h>
#include <stdlib.h>

#define DAY 5
#define LESSON 6

char* get_course( int n, char *course ){
	if( n < 0 || n > 5 ) return "不存在该课程";
	switch( n ){
		case 0:
			course = "没有课程";
			break;
		case 1:
			course = "c语言";
			break;
		case 2:
			course = "数据结构与算法";
			break;
		case 3:
			course = "php课程";
			break;
		case 4:
			course = "mysql数据库";
			break;
		case 5:
			course = "linux运维";
			break;
	}
	return course;
}

void print_course_table( int (*p)[LESSON], int day, int lesson, char* course_name ){
	int i = 0;
	printf( "第一节\t第二节\t" );
	printf( "第三节\t第四节\t" );
	printf( "第五节\t第六节\t" );
	putchar( '\n' );
	int j = 0;
	for( i = 0 ; i < day ; i++ ){
		printf( "星期%d\t", i + 1 );
		for( j = 0 ; j < lesson ; j++ ){
			printf( "%s\t", get_course( *( *( p + i ) + j ), course_name ) );
		}
		putchar( '\n' );
	}
}

int main( void ) {
	
	int course[DAY][LESSON] = {
		{ 1, 4, 5, 3, 2, 0 },
		{ 1, 4, 1, 3, 4, 2 },
		{ 1, 2, 1, 3, 4, 5 },
		{ 1, 1, 1, 4, 4, 5 },
		{ 3, 3, 3, 2, 1, 0 }
	};
	
	int choice, day, lesson;
	char* course_name = NULL;

	while( 1 ) {
		printf( "请输入你想要的操作:[1-2]\n" );
		printf( "1、查询课程\n" );
		printf( "2、退出系统\n" );
		scanf( "%d", &choice );
		switch( choice ){
			case 1:
				printf( "请输入星期[1-5]\n" );
				scanf( "%d", &day );
				if( day < 1 || day > 5 ) {
					printf( "星期只能输入[1-5]\n" );
					break;
				}
				printf( "请输入要查询的课程[1-6]\n" );
				scanf( "%d", &lesson );
				if( lesson < 1 || lesson > 6 ) {
					printf( "课程只能输入[1-6]\n" );
					break;
				}
				course_name = get_course( course[day-1][lesson-1], course_name );
				printf( "星期%d, 第%d节课程是%s\n", day, lesson, course_name );
				print_course_table( course, DAY, LESSON, course_name );
				break;
			case 2:
				exit( 0 );
				break;
			default:
				printf( "没有该功能\n" );
		}
	}

	return 0;
}
