#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char arr[100];
    printf("enter the array:\n");
    scanf("%s",arr);
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='*')
            count++;
        else if(arr[i]=='#')
            count--;    
    } 
    printf("%d",count);
    return 0;
}