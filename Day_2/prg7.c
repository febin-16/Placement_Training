#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=12,b=24,temp;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("before swap:a:%d b:%d \n",a,b);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("after swap:a:%d b:%d \n",a,b);
    return 0;
}