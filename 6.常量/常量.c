#include <stdio.h>

void main(){
	int a = 0213; // 八进制 
	int b = 0x4b; // 十六进制 
	
	printf("a=%d, b=%d\n",a,b); 
	
	// 使用 \ 来 换行写 
	char str[100] = "wei\
min";
	printf("str=%s",str);
} 
