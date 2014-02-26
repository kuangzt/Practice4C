#include "stdio.h"

char *test(char *tmp)
{
    return tmp;
}

void main(void)
{
    printf("%s",test("第一个测试例子\n"));
}
