#include <stdio.h>
// 字符类型
// 单引号引起来
// 允许转义符 
// 在  c语言中，char本质是整数，输出的时候输出ASCII对应的字符 
// ASCII码表，是字符和数字的对应表 
void main(){
	
	char c = 'w';
	
	printf("c=%c\n",c); 
	
	char a = 99;
	printf("a=%c",a);
}
