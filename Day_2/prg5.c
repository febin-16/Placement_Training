#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=12,b=24,sum;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum = *p1 + *p2;
    printf("sum:%d\n",sum);
    return 0;
}