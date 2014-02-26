#include<stdio.h>
#include<stdlib.h>
main(){
  struct stu
  {
    int num;
    char *name;
    char sex;
    float score;
  }  ps;
  //ps=(struct stu*)malloc(sizeof(struct stu));
  ps.num=102;
  ps.name="Zhang ping";
  ps.sex='M';
  ps.score=62.5;
  #ifdef NUM
  printf("Number=%d\nScore=%f\n",ps.num,ps.score);
  #else
  printf("Name=%s\nSex=%c\n",ps.name,ps.sex);
  #endif
  //free(ps);
  extern int cc;
  printf("cc is %d \n",cc);
extern char *aa;
}

int cc = 89;
char aa[100];
