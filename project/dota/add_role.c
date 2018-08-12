/********************添加角色*********************
 	Author: ghostwu
	Email: 359173352@qq.com
 ************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include "role.h"

#define ROLE_INFO_FILE	"role_info.txt" 	//保存角色信息

/*
 * 处理不同的业务逻辑
 */
void handler_type( int type );

/*
 * 获取文件的大小, 也可以使用fseek方式, 下面的效率更高
 */
int get_file_size( char* filename ) {
	struct stat statbuf;
	stat( filename, &statbuf );
	int size = statbuf.st_size;
	return size;
}

FILE* open_role_file(){
	FILE* fp;
	fp = fopen( ROLE_INFO_FILE, "ab" );
	if( NULL == fp ){
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	return fp;
}

void add_file_header( FILE *fp ) {
	fprintf( fp, "%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", "名称", "力量", "附加力量", "敏捷", "附加敏捷", "智力", "附加智力", "最小攻击力", "最大攻击力", "攻击速度", "护甲" );	
}

int add_role( FILE *fp ) {

	struct hero_role hr;

	printf( "角色名称: " );
	scanf( "%s", hr.name );	

	printf( "力量: " );
	scanf( "%d", &hr.power );
	printf( "附加力量: " );
	scanf( "%f", &hr.optional_power );

	printf( "敏捷: " );
	scanf( "%d", &hr.agility );
	printf( "附加敏捷: " );
	scanf( "%f", &hr.optional_agility );

	printf( "智力: " );
	scanf( "%d", &hr.intelligence );
	printf( "附加智力: " );
	scanf( "%f", &hr.optional_intelligence );

	printf( "最小攻击力: " );
	scanf( "%d", &hr.min_attack );
	printf( "最大攻击力: " );
	scanf( "%d", &hr.max_attack );

	printf( "速度: " );
	scanf( "%f", &hr.speed );

	printf( "护甲: " );
	scanf( "%f", &hr.armor );

	int count = fprintf( fp, "%s,%d,%.1f,%d,%.1f,%d,%.1f,%d,%d,%.1f,%.1f\n", hr.name, hr.power, hr.optional_power, hr.agility, hr.optional_agility, hr.intelligence, hr.optional_intelligence, hr.min_attack, hr.max_attack, hr.speed, hr.armor );	
	return count;
}

void show_menu() {
	printf( "请选择对应的操作\n" );
	printf( "1、添加角色\n" ); 
	printf( "2、退出程序\n" ); 
	printf( "请输入你要进行的操作\n" );
	char type;
	while( TRUE ){
		type = getchar();
		if( type >= '0' && type <= '9' ) {
			break;
		}else{
			printf( "请输入数字:" );
		}
	}
	handler_type( (short)type - 48 );
}

void handler_type( int type ) {
	FILE *fp = NULL;
	switch( type ) {
		case 1:
			if( !fp ) fp = open_role_file();
			if( get_file_size( ROLE_INFO_FILE ) == 0 ){
				add_file_header( fp );
			}
			if( add_role( fp ) )
				printf( "角色添加成功\n" );
			else
				printf( "角色添加失败\n" );
			break;
		case 2:
			exit( 0 );
	}
	show_menu();
}

int main( void ) {
	show_menu();
	return 0;
}

