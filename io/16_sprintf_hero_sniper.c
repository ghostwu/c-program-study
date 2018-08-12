/*
 * sprintf练习实例
 * 打印Dota英雄:小火枪的相关信息
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main( void ) {
	
	FILE *fp;
	fp = fopen( "hero_sniper.txt", "w" );
	/*
	 * 如果操作文件　没有对异常做处理, 程序可能会引起崩溃，段错误等
	 * 比如: 把编译生成的a.out放到一个没有写权限的目录下, 那么以写的
	 * 方式打开文件，就会报权限错误，如果没有报错处理，就可能会出现段错误等
	 */
	if( NULL == fp ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	char *hero_name = "英雄名称: 火枪手";
	char ch = '\n';
	fprintf( fp, "%s%c", hero_name, ch );

	char *init_attr = "属性信息:";
	int init_hp						= 		454; //血量
	int init_mp						=		195; //魔法
	int power						=		16;  //力量
	float addtional_power 			= 		1.7; //附加力量
	int agility						=		21;  //敏捷
	float addtional_agility			=   	2.9; //附加敏捷
	int intelligence				=     	15;  //智力
	float addtional_intelligence	= 		2.6; //附加智力
	int min_attack					=    	36;  //最小攻击力
	int max_attack					= 		42;  //最大攻击力
	float attack_speed				= 		1.4; //攻击速度
	float armor						=		1.9; //护甲

	fprintf( fp, "%s\n", init_attr );	
	fprintf( fp, "\t%s: %d\n \t%s: %d\n", "血量", init_hp, "魔法", init_mp );
	fprintf( fp, "\t%s: %d%+.1f\n", "力量", power, addtional_power );
	fprintf( fp, "\t%s: %d%+.1f\n", "敏捷", agility, addtional_agility );
	fprintf( fp, "\t%s: %d%+.1f\n", "智力", intelligence, addtional_intelligence );
	fprintf( fp, "\t%s: %d%c%d\n", "攻击力", min_attack, '-', max_attack );
	fprintf( fp, "\t%s: %.1f\n", "攻击速度", attack_speed );
	fprintf( fp, "\t%s: %.1f\n", "护甲", armor );

	//配合英雄[恶魔巫师(lion), 复仇之魂(vs), 撼地神牛(es), 术士(wl), 暗影牧师(sp)]
	enum coordinate_heros{ LION, VS, ES, WL, SP };
	char cd_heros[5][20] = { "恶魔巫师", "复仇之魂", "撼地神牛", "术士", "暗影牧师" };
	fprintf( fp, "%s: ", "配合英雄" );
	int i = LION;
	for( i = LION; i <= SP; i ++ ){
		if( i == SP ) {
			fprintf( fp, "%s\n", cd_heros[i] );
			break;
		}
		fprintf( fp, "%s, ", cd_heros[i] );
	}

	//克制英雄[冥界亚龙(VIPER), 末日守卫(DOOM), 恶魔巫师(LION), 狼人(lyc), 仙女龙(PUCK)]
	
	char *restraint_hero[5] = { "冥界亚龙", "末日守卫", "恶魔巫师", "狼人", "仙女龙" };
	fprintf( fp, "%s: ", "克制英雄" );
	int j = 0;
	for( j = 0; j < 5; j++ ){
		if( j == 4 ) {
			fprintf( fp, "%s\n", restraint_hero[j] );
			break;
		}
		fprintf( fp, "%s, ", restraint_hero[j] );
	}

	fclose( fp );
	return 0;
}

