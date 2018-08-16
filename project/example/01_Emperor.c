#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main( void ){
	
	int hp1 = 100; //p1 初始血量
	int hp2 = 200; //p2 初始血量
	int attack_power1, attack_power2; //攻击力
	int round = 0; //对战轮数

	srand( time( 0 ) );

	while( hp1 > 0 && hp2 > 0 ) {
		attack_power1 = rand() % 11 + 5; //5-15 随机攻击力
		attack_power2 = rand() % 11 + 5; //5-15 随机攻击力
		//p1先攻击,p2掉血
		hp2 -= attack_power1;
		hp1 -= attack_power2;
		if( hp2 <= 0 ) { hp2 = 0; }
		if( hp1 <= 0 ) { hp1 = 0; }
		printf( "-------------------------------------\n" );
		printf( "第%d轮开始\n", ++round );
		printf( "p1攻击p2,attack_power=%d,hp2=%d\n", attack_power1, hp2 );
		printf( "p2攻击p1,attack_power=%d,hp1=%d\n", attack_power2, hp1 );
		printf( "-------------------------------------\n" );
		sleep( 1 );
	}
	printf( "KO结束,hp1=%d,hp2=%d\n", hp1, hp2 );


	return 0;
}
