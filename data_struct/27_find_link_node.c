/*
 * 遍历查找链表节点
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user_info {
	int id;
	char name[20];
	struct user_info *p_next;
}ui;

ui* build_link_list() {
	ui* p_head;
	ui* p_node;

	p_head = ( ui* )malloc( sizeof( ui ) );
	if( NULL == p_head ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}
	p_node = p_head;

	int i = 0 ;
	for( i = 0 ; i < 6 ; i++ ) {
		ui* p = ( ui* )malloc( sizeof( ui ) );
		if( NULL == p ) {
			printf( "内存分配失败\n" );
			exit( -1 );
		}
		printf( "请输入第%d个用户的编号\n", i + 1 );
		scanf( "%d", &p->id );
		printf( "请输入第%d个用户的姓名\n", i + 1 );
		scanf( "%s", p->name );
		p->p_next = NULL;
		p_node->p_next = p;
		p_node = p;
	}
	return p_head;
}

ui* find_link_node( ui* p_head, const char* name ) {
	ui *p_node = p_head;
	while( p_node != NULL ){
		if( strcmp( name, p_node->name ) == 0 ) {
			break;
		}
		p_node = p_node->p_next;
	}
	return p_node;
}

int main( void ) {

	ui* p_head = build_link_list();
	ui* p_node = find_link_node( p_head, "悟空" );
	
	if( NULL != p_node ){
		printf( "%d---->%s\n", p_node->id, p_node->name );
	}

	return 0;
}

