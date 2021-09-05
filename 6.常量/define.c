#include <stdio.h>

#define DEBUG 

void main(){

#ifdef DEBUG  // 如果定义了DEBUG 
    printf("定义了debug");
#endif
#ifndef DEBUG // 如果没有定义DEBUG 
    printf("没有定义debug");
#endif 
} 
