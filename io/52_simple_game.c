#include <stdio.h>
#include <curses.h>
#include <string.h>

int main( void ) {

	char *str = "Ready, Go!";
	int offset = strlen( str ) / 2;
	initscr();

	//开启颜色模式
	if( OK == start_color() ){
		//设置成对的颜色[前景色,背景色]
		init_pair( 1, COLOR_RED, COLOR_GREEN );
		//开启字符输出颜色
		attron( COLOR_PAIR( 1 ) );
		move( LINES / 2, COLS / 2 - offset );
		waddstr( stdscr, str );
		//关闭字符输出颜色
		attroff( COLOR_PAIR( 1 ) );
		refresh();
		getch();
	}else{
		waddstr( stdscr, "初始化颜色模式失败" );
		getch();
	}
	endwin();
	
	return 0;
}

