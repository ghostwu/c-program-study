/*
 * malloc分配结构体数组空间
 */

#include <stdlib.h>
#include <stdio.h>

int main( void ) {

	typedef struct student {
		int math;
		int english;
		int computer;
	}STU;
	int num;
	float m_sum = 0.0, e_sum = 0.0, c_sum = 0.0;
	float m_avg, e_avg, c_avg;

	printf( "请输入学生的个数\n" );		
	scanf( "%d", &num );
	STU *pSTU;
	pSTU = ( STU* )malloc( sizeof( STU ) * num );
	if( NULL == pSTU ) {
		printf( "内存分配失败\n" );
		exit( -1 );
	}

	int i = 0;
	for( i = 0 ; i < num ; i++ ) {
		printf( "第%d个学生\n", ( i + 1 ) );
		printf( "数学成绩========>" );
		scanf( "%d", &pSTU[i].math );
		printf( "英语成绩========>" );		
		scanf( "%d", &pSTU[i].english );
		printf( "电脑成绩========>" );	
		scanf( "%d", &pSTU[i].computer );

		m_sum += pSTU[i].math;
		e_sum += pSTU[i].english;
		c_sum += pSTU[i].computer;

	}

	m_avg = (float)m_sum / (float)num;
	e_avg = (float)e_sum / (float)num;
	c_avg = (float)c_sum / (float)num;
	
	printf( "数学总分:%.2f,平均分:%.2f\n", m_sum, m_avg );
	printf( "英文总分:%.2f,英文分:%.2f\n", e_sum, e_avg );
	printf( "电脑总分:%.2f,电脑分:%.2f\n", c_sum, c_avg );

	return 0;
}
