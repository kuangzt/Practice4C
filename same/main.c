#include<stdio.h>
#include "add.h"
#include "globaldebug.h"
int main(int argc,char *argv[]){
printf("%d\n",add(2,3));
GI_DEBUG_POINT();
  return 0;
}



void print1(){
  printf("test...\n");
}

float sub(float a,float b){
  return (a-b);
}
