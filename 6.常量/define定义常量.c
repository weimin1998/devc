#include <stdio.h>

// define ���峣�� 
// define����ĳ��������޸� 
#define PI 3.14

#define A 1
#define B A+3
#define C A/B*3
void main(){
	double area;
	
	double r = 1.0;
	
	area = PI * r * r;
	
	printf("���=%.2f",area); 
	// define ֻ�Ǽ򵥵��滻 
	printf("\nC=%d",C);// A/A+3*3=1/1+3*3
} 
