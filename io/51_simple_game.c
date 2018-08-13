#include <stdio.h>
#include <curses.h>
#include <string.h>

int main( void ) {
	
	char *str = "ready, go!";
	int offset = strlen( str ) / 2;
	initscr();
	//画一个框(光标)
	box( stdscr, ACS_VLINE, ACS_HLINE );
	//移动字符串到屏幕中间
	move( LINES / 2, COLS / 2 - offset );
	//输出字符串
	waddstr( stdscr, str );
	//显示,类似printf
	refresh();
	getch();
	endwin();

	return 0;
}

