#include <stdio.h>

// ������ʾ�ڴ��е�һ���洢����
// ��ͬ���������ͣ�ռ�õĿռ��С��һ�� 
void main(){
	
	// %d ������� 
	int a = 1;
	printf("a=%d\n",a) ;
	
	// % f ���С���� .2 ��ʾ������λС�� 
	double d = 3.0;
	printf("d=%.2f\n",d);
	
	// %c ���һ���ַ� 
	char c = 'w';
	printf("c=%c\n",c);
	
	// %s ����ַ��� 
	char name[] = "weimin";
	printf("name=%s\n",name);
}
