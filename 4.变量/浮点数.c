#include <stdio.h>
// �����ȣ�˫���� 
// ������������Ĭ��������double 
// 
// double �� float �������ʱ��ָ��λ����Ĭ�ϱ���6λС�� ��Ҳ���� %f �ȼ��� %.6f 
// float���ֻ�ܾ�ȷ��6λС��
// double��ྫȷ��15λС�� 
// ������Ծ�ȷ������λ������ǲ���ȷ�� 
void main(){
	float f = 1.123456789f; 
	printf("f=%f\n",f);
	
	double a = 5.12; // 5.120000 
	double b = .512; // 0.512000
	double c = 5.12e2;// 512.000000     5.12 * (10^2)
	double d = 5.12e-2;//0.051200       5.12 * (10^-2)
	
	printf("a=%f\n",a); 
	printf("b=%f\n",b); 
	printf("c=%f\n",c); 
	printf("d=%f\n",d); 
	
	float x = 1.123456789;
    double y = 1.12345678912345699999;
    printf("x=%.9f\n",x);
    printf("y=%.20f",y);
}
