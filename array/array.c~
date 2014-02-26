#include<stdio.h>
#define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))
void print(int a[]){
int length = (int) (sizeof(a) / sizeof(a[0]));
printf("%d \n",length);
int j=0;
for(j=0;j<length;j++){
  printf("the %d s num is %d\n",j+1,a[j]);
}
}
main()
{
  int i,a[10];
printf("%d \n",NELEM(a));
  for(i=0;i<10;)
      a[i++]=2*i+1;
 // print(a);
  //printf("\n%d %d\n",a[5],a[5]);
int length = (int) (sizeof(a) / sizeof(a[0]));
printf("%d \n",length);
int j=0;
for(j=0;j<length;j++){
  printf("the %d s num is %d\n",j+1,a[j]);
}
}
