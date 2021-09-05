#include <stdio.h>

// define 定义常量 
// define定义的常量不可修改 
#define PI 3.14
void main(){
	double area;
	
	double r = 1.0;
	
	area = PI * r * r;
	
	printf("面积=%.2f",area); 
} 
