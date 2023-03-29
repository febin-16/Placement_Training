#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,size,temp;
    char arr[100];
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the array elements:\n");
    scanf("%s",arr);
    for(i=0,j=size-1;i<size/2;i++,j--)
    {
        if(arr[i]=='0')
            arr[i]='#';
        else if(arr[j]=='0')
            arr[j]='#';
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;        
    } 
    printf("%s",arr);
    return 0;
}