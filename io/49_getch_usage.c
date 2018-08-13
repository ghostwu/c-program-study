/*
 * getch(): 读入一个字符,不用等enter(回车) 就可以直接读入
 */
#include <stdio.h>
#include <curses.h>

/*
 * 在游戏图形界面输入字符
 * 1, 开启图形模式: initscr();
 * 2, getch()　从窗口读入一个字符, 屏幕会暂停一下
 * 3, endwin() 结束curses, 恢复原来的屏幕
 * 注意: 在编译时，要使用 -l参数　动态链接curses库
 * gcc 49_getch_usage.c -l curses
 */

int main( void ) {
	initscr();
	int c = getch();
	endwin();
	printf( "%c\n", c );
	return 0;
}
