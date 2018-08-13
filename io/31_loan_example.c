/*
 * 输入贷款金额，年限，每月还款数
 * 计算:需要还多少利息
 */
#include <stdio.h>

int main( void ) {

	int loan;
	printf( "请输入您的贷款金额\n" );
	scanf( "%d", &loan );
	printf( "请输入您的还款年限\n" );
	int year;
	scanf( "%d", &year );
	printf( "请输入您每月还款金额\n" );
	int payment;
	scanf( "%d", &payment );

	int interest = 12 * payment * year - loan;
	printf( "你的利息是%d\n", interest );


	return 0;
}

