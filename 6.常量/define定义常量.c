#include <stdio.h>

// define 定义常量 
// define定义的常量不可修改 
#define PI 3.14

#define A 1
#define B A+3
#define C A/B*3
void main(){
	double area;
	
	double r = 1.0;
	
	area = PI * r * r;
	
	printf("面积=%.2f",area); 
	// define 只是简单的替换 
	printf("\nC=%d",C);// A/A+3*3=1/1+3*3
} 
