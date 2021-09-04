#include <stdio.h>
// 单精度，双精度 
// 浮点数常量，默认类型是double 
// 
// double 和 float 在输出的时候不指定位数，默认保留6位小数 。也就是 %f 等价于 %.6f 
// float最多只能精确到6位小数
// double最多精确到15位小数 
// 如果尝试精确到更多位，结果是不正确的 
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
