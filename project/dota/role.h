/********************角色相关数据定义*********************
 	Author: ghostwu
	Email: 359173352@qq.com
 ********************************************************/
#ifndef _DOTA_ROLE
#define _DOTA_ROLE
#define TRUE 1

struct hero_role {
	char name[32];							//名称
	int power;								//力量
	float optional_power;					//附加力量
	int agility;							//敏捷
	float optional_agility;					//附加敏捷
	int intelligence;						//智力
	float optional_intelligence;			//附加智力
	int min_attack;							//最小攻击力
	int max_attack;							//最大攻击力
	float speed;							//攻击速度
	float armor;							//护甲
};

void add_file_header( FILE *fp );						//添加文件头字段信息
int add_role( FILE *fp );								//添加角色

#endif
