/**********************皇帝翻牌**********************
 * 规则:
 * 总共玩10天
 * 3位妃子好感度<60, 暴乱,游戏结束
 * 每天结算好感度
**********************皇帝翻牌**********************/
#include <stdio.h>
#include <string.h>

#define BEFORE_ADD_CONCUBINE  "爱江山更爱美人,万千佳丽一点红"
#define AFTER_ADD_CONCUBINE   "新增妃子,其他人好感度-10"

char concubine_name[16];					//存储贵妃名字
char concubines[6][16] = {
	"貂蝉",
	"云芝",
	"美杜莎",
	"火舞",
	"夭夭"
};
int impression[6] = { 100, 100, 100, 100, 100 };
void safe_flush( FILE* stream ){
	int ch;
	while( ( ch = fgetc( stream ) ) != EOF && ch != '\n' );
}
void show_impression(){
	printf( "%4s\t\t%s\n", "名字", "好感度" );
	for( int i = 0; i < 6; i++ ){
		printf( "%4s\t\t%3d\n", concubines[i], impression[i] );
	}
}
void concubine_selection() {

	printf( "%s\n", BEFORE_ADD_CONCUBINE );
	printf( "%s:", "娘娘名讳" );
	scanf( "%s", concubine_name );
	strcpy( &concubines[5][0], concubine_name );
	safe_flush( stdin );
	printf( "\n%s\n\n", AFTER_ADD_CONCUBINE );

	impression[5] = 110;
	for( int i = 0; i < 6; i++ ){
		impression[i] -= 10;
	}
	show_impression();
}

void favoritism(){
	printf( "陛下,请输入要宠幸的妃子:" );
	memset( concubine_name, 0, 16 );
	scanf( "%s", concubine_name );
	safe_flush( stdin );
	for( int i = 0; i < 6; i++ ){
		if( strcmp( concubine_name, concubines[i] ) == 0 ) {
			impression[i] += 10;
		}else{
			impression[i] -= 10;
		}
	}
	show_impression();
}

void drop_concubine(){
	printf( "请输入娘娘的名字:" );	
	memset( concubine_name, 0, 16 );
	scanf( "%s", concubine_name );
	safe_flush( stdin );
	
	for( int i = 0; i < 5; i++ ){
		if( strcmp( concubine_name, concubines[i] ) == 0 ) {
			for( int j = i; j < 5; j++ ){

			}
		}
	}
}

void make_choice(){
	int n;
	printf( "陛下请选择:" );
	scanf( "%d", &n );
	safe_flush( stdin );	
	switch( n ){
		case 1:
			concubine_selection();
			break;
		case 2:
			favoritism();
			break;
		case 3:
			drop_concubine();
			break;
	}
}
void show_menu( int day ){
	printf( "\n=================第%d天=================:\n", day );
	printf( "-----------------1、皇帝下旨选妃!-----------------\n" );
	printf( "-----------------2、翻牌宠信----------------------\n" );
	printf( "-----------------3、打入冷宫!---------------------\n" );
	printf( "-----------------4、朕的爱妃呢?-------------------\n" );
	make_choice();
}

int main( void ) {
	
	int play_days = 0;
	while( play_days <= 10 ) {
		play_days++;
		show_menu( play_days );	
	}

	return 0;
}
