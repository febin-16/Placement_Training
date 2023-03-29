#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    printf("Address of the direct:%p\n",&a);
    printf("address of a using pointer:%p\n",ptr);
    printf("value of a :%d\n",a);
    printf("value of a using pointer:%d",*ptr);
    return 0;
}