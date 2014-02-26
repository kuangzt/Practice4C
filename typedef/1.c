#include<stdio.h>
typedef int arrayten[10];
int main(int argc,char *argv){
arrayten a;
a[1] = 1;
printf("a[1] is %d\n",a[1]);
char string[] = "Linux C";
char *p = "Linux C";
string[0] = 'a';
//p[0] = 'a'; 
printf("string length is %d\n",(int)((sizeof(string)/sizeof(string[0])))); 
    return 0; 
}
