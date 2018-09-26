/*
 * 链表结构
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct user_info {
	int id; //编号
	char name[20]; //姓名
	char province[10]; //省份
	struct user_info* pNext; //指向下一个节点的指针
}ui;

int main( void ) {

	ui* pHead = (ui*)malloc( sizeof( ui ) );
	pHead->id = 10;
	//pHead->name = "ghostwu";
	strcpy( pHead->name, "ghostwu" );
	//pHead->province = "江西省";
	strcpy( pHead->province, "江西省" );
	pHead->pNext = NULL;

	printf( "%d, %s, %s\n", pHead->id, pHead->name, pHead->province );
	free( pHead );
}
