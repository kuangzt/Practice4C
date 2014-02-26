#include "stdio.h"

char[] *test()
{
    //static char tmp[30]="第一个测试例子\n";//写成这样编译时弹出警告，最后的结果也是乱码
   char *tmp[]={"第一个测试例子","第yi个测试例子"};//写成这样可以用指针返回数组首地址
    return tmp;
}

void main(void)
{
char *temp[] = test();
    printf("%s",temp[1]);
}
