#include <stdio.h>
// 1byte=8bit
// 1个字节占8位 
// 以int为例 
void main(){
	printf("int 的字节数：%d\n",sizeof(int)); //4
	// 默认是 signed，有符号的 
	int max =  2147483647; // 2的31次方-1 
	printf("有符号的int的最大值：%d\n",max);
	int min = -2147483648; // -2的31次方 
	printf("有符号的int的最小值：%d\n",min);
	
	// a和b都越界了 
	int a = 2147483648;
	printf("a=%d\n",a); 
	
	int b = -2147483649;
	printf("b=%d\n",b);
	
	printf("***********************************\n");
	
	unsigned int umin = 0; 
	unsigned int umax = 4294967295; //2的32次方-1 
	
	printf("无符号int的最小值%u\n",umin);
	printf("无符号int的最大值%u",umax);
}
