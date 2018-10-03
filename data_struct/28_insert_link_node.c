/*
 * 插入链表节点
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct user_info {
	int id;
	char name[20];
	struct user_info *p_next;
}ui;

ui* build_link_list(){
	ui* p_head;
	ui* p_node;
	p_head = ( ui* )malloc( sizeof( ui ) );
	if( NULL == p_node ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}
	p_node = p_head;
	int i = 0;
	for( i = 0 ; i < 3 ; i++ ){
		ui* p = ( ui* )malloc( sizeof( ui ) );
		if( NULL == p ) {
			printf( "内存分配失败\n" );
			exit( -1 );
		}
		printf( "请输入第%d个用户的编号\n", ( i + 1 ) );
		scanf( "%d", &p->id );
		printf( "请输入第%d个用户的姓名\n", ( i + 1 ) );
		scanf( "%s", p->name );
		p->p_next = NULL;
		p_node->p_next = p;
		p_node = p;	
	}
	return p_head;
}

void insert_link_node( ui* p_head, int pos ) {
	int i = 0;
	ui* p_node = p_head->p_next;
	ui* p_before = p_head;
	while( p_node != NULL ){
		i++;
		if( i == pos ) break;
		p_before = p_node;
		p_node = p_node->p_next;
	}

	ui* p = ( ui* )malloc( sizeof( ui ) );
	if( NULL == p ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}
	printf( "请输入插入节点的编号\n" );
	scanf( "%d", &p->id );
	printf( "请输入插入节点的姓名\n" );
	scanf( "%s", p->name );
	p->p_next = NULL;
	p->p_next = p_before->p_next;
	p_before->p_next = p;
}

void print_link_list( ui* p_head ) {
	ui* p_node = p_head->p_next;
	while( p_node != NULL ){
		printf( "%d------>%s\n", p_node->id, p_node->name );
		p_node = p_node->p_next;
	}
}

int main( void ) {
	ui* p_head = build_link_list();
	printf( "insert before-----------\n" );
	print_link_list( p_head );

	insert_link_node( p_head, 10 );
	printf( "insert after-----------\n" );
	print_link_list( p_head );
	return 0;
}
