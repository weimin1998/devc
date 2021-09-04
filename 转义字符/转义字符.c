#include <stdio.h>
void changeLine(){
	printf("\n\n");
}
void homework(){
	printf("姓名\t年龄\t籍贯\t住址\n");
	printf("魏敏\t23\t山西\t上海\n");
} 
//  \n 表示换行 
//  \t 表示制表符  4个空格 
//  \\ 表示一个斜杠  第一个 \ 表示转义，第二个表示输出的内容 
//  \"  输出一个双引号 
//  \'  输出一个单引号 
//  \r  表示回车 ，不是换行，光标会重新定位到当前行的开头 
void main(){
	printf("北京上海天津");
	changeLine();
	printf("北京\t上海\t天津");
	changeLine();
	printf("西瓜\t冬瓜");
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
