#include <stdio.h>

#define DEBUG 

void main(){

#ifdef DEBUG  // ���������DEBUG 
    printf("������debug");
#endif
#ifndef DEBUG // ���û�ж���DEBUG 
    printf("û�ж���debug");
#endif 
} 
