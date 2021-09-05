#include <stdio.h>


void homework(){
	int num = 1;
	
	// 获取num这个int类型的变量的地址 
	int* ptr = &num;
	
	printf("num这个变量的地址为：%p\n",ptr);
	
	// 通过指针修改原变量的值 
	*ptr = 2;
	
	printf("num=%d\n",num); 
	printf("num这个变量的地址为：%p\n",ptr);
}


// 指针
// 用 & 取变量的地址
void main(){
	
	int i = 1;
	int* ptr = &i; 
	
	printf("i=%d, 地址=%p\n",i,ptr); 
	
	printf("ptr的地址=%p\n",&ptr); 
	
	printf("ptr指向的值=%d",*ptr); 
	
	printf("\n");
	
	homework();
}
