/*
 * 创建链表
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct user_info {
	int id;
	char name[20];
	struct user_info *p_next;
}ui;

int main( void ){

	ui* p_head;	
	ui* p_node;	

	p_head = (ui*)malloc( sizeof( ui ) );
	if( NULL == p_head  ){
		printf( "内存分配失败\n" );
		exit( -1 );
	}
	p_head->p_next = NULL;
	p_node = p_head;

	int i = 0;
	printf( "请输入3个人的姓名和编号\n" );
	for( i = 0 ; i < 3 ; i++ ){
		printf( "请输入第%d个人的编号\n", ( i + 1 ) );	
		scanf( "%d", &p_node->id );
		printf( "请输入第%d个人的姓名\n", ( i + 1 ) );	
		scanf( "%s", p_node->name );
	
		ui* p = ( ui* )malloc( sizeof( ui ) );
		if( NULL == p ){
			printf( "内存分配失败\n" );
			exit( -1 );
		}
		p_node->p_next = p;
		p->p_next = NULL;
		p_node = p;			
	}

	p_node = p_head;

	for( i = 0 ; i < 3 ; i++ ){
		printf( "%d---->%s\n", p_node->id, p_node->name );
		p_node = p_node->p_next;
	}

	return 0;
}
