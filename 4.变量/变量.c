#include <stdio.h>

// 变量表示内存中的一个存储区域
// 不同的数据类型，占用的空间大小不一样 
void main(){
	
	// %d 输出整数 
	int a = 1;
	printf("a=%d\n",a) ;
	
	// % f 输出小数， .2 表示保留两位小数 
	double d = 3.0;
	printf("d=%.2f\n",d);
	
	// %c 输出一个字符 
	char c = 'w';
	printf("c=%c\n",c);
	
	// %s 输出字符串 
	char name[] = "weimin";
	printf("name=%s\n",name);
}
