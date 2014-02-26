#include<stdio.h>
#include<time.h>
struct date{
  int year;
  int month;
  int day;
};
int main(){
time_t rawtime; 
struct tm * timeinfo; 
time ( &rawtime ); 
timeinfo = localtime ( &rawtime ); 
printf ( "/007The current date/time is: %s", asctime (timeinfo) ); 
printf("the current time is %d \n",timeinfo->tm_hour);
struct date date1;
date1.year = timeinfo->tm_year;
date1.month = timeinfo->tm_mon;
date1.day = timeinfo->tm_yday;
char *p1,p2;
char cs[] = {'q','w','e'};
p1 = cs;
p2 = cs[1];

typedef long double REAL;
REAL aa = 1;
typedef int ARRAY[10];
ARRAY cc;
cc[0]=2;
sizeof(cc)/sizeof(cc[0]);
printf("%lu",sizeof(cc)/sizeof(cc[0]));
}
