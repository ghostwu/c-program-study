#include <stdio.h>
// 以0开头的表示8进制
struct {
	int i_stu_no;
	char* s_stu_name;
}student[] = {
	010, "ghostwu",
	011, "wukong",
	012, "bajie"
};

int main( void ) {
	printf( "student[0].i_stu_no=%d\n", student[0].i_stu_no );
	printf( "student[0].s_stu_name=%s\n", student[0].s_stu_name );
	printf( "student[1].i_stu_no=%d\n", student[1].i_stu_no );
	printf( "student[1].s_stu_name=%s\n", student[1].s_stu_name );
	printf( "student[2].i_stu_no=%d\n", student[2].i_stu_no );
	printf( "student[2].s_stu_name=%s\n", student[2].s_stu_name );
	return 0;	
}
