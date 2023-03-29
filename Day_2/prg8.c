#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=24,b=12,temp;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    a=*p1 / *p2;
    printf("a:%d\n",a);
    return 0;
}