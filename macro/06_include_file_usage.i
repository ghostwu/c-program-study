# 1 "06_include_file_usage.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "06_include_file_usage.c"
# 11 "06_include_file_usage.c"
# 1 "one.h" 1


 void one();
# 12 "06_include_file_usage.c" 2
# 1 "two.h" 1



 void two();
# 13 "06_include_file_usage.c" 2

int main( void ) {
 one();
 two();
 return 0;
}

void one() {
 printf( "one\n" );
}

void two() {
 printf( "two\n" );
}
