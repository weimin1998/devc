#include <stdio.h>
void changeLine(){
	printf("\n\n");
}
void homework(){
	printf("����\t����\t����\tסַ\n");
	printf("κ��\t23\tɽ��\t�Ϻ�\n");
} 
//  \n ��ʾ���� 
//  \t ��ʾ�Ʊ��  4���ո� 
//  \\ ��ʾһ��б��  ��һ�� \ ��ʾת�壬�ڶ�����ʾ��������� 
//  \"  ���һ��˫���� 
//  \'  ���һ�������� 
//  \r  ��ʾ�س� �����ǻ��У��������¶�λ����ǰ�еĿ�ͷ 
void main(){
	printf("�����Ϻ����");
	changeLine();
	printf("����\t�Ϻ�\t���");
	changeLine();
	printf("����\t����");
	changeLine();
	printf("hello world \\"); 
	changeLine();
	printf("\""); 
	changeLine();
	printf("\'"); 
	changeLine();
	printf("hello,ccccc\rworld");
	
	changeLine();
	homework();
} 
