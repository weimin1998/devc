#include <stdio.h>


void homework(){
	int num = 1;
	
	// ��ȡnum���int���͵ı����ĵ�ַ 
	int* ptr = &num;
	
	printf("num��������ĵ�ַΪ��%p\n",ptr);
	
	// ͨ��ָ���޸�ԭ������ֵ 
	*ptr = 2;
	
	printf("num=%d\n",num); 
	printf("num��������ĵ�ַΪ��%p\n",ptr);
}


// ָ��
// �� & ȡ�����ĵ�ַ
void main(){
	
	int i = 1;
	int* ptr = &i; 
	
	printf("i=%d, ��ַ=%p\n",i,ptr); 
	
	printf("ptr�ĵ�ַ=%p\n",&ptr); 
	
	printf("ptrָ���ֵ=%d",*ptr); 
	
	printf("\n");
	
	homework();
}
