#include <stdio.h>
// 1byte=8bit
// 1���ֽ�ռ8λ 
// ��intΪ�� 
void main(){
	printf("int ���ֽ�����%d\n",sizeof(int)); //4
	// Ĭ���� signed���з��ŵ� 
	int max =  2147483647; // 2��31�η�-1 
	printf("�з��ŵ�int�����ֵ��%d\n",max);
	int min = -2147483648; // -2��31�η� 
	printf("�з��ŵ�int����Сֵ��%d\n",min);
	
	// a��b��Խ���� 
	int a = 2147483648;
	printf("a=%d\n",a); 
	
	int b = -2147483649;
	printf("b=%d\n",b);
	
	printf("***********************************\n");
	
	unsigned int umin = 0; 
	unsigned int umax = 4294967295; //2��32�η�-1 
	
	printf("�޷���int����Сֵ%u\n",umin);
	printf("�޷���int�����ֵ%u",umax);
}
