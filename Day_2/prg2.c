#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,size,arr[100];
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }    
    if(sum<=2)
    {
        if(sum==2)
        {
            printf("prime");
            return 0;
        }
        else{
            printf("niether prime nor composite");
            return 0;
        }
    }
    else{
        for(i=2;i<=sum/2;i++)
        {
            if(sum%i==0)
            {
                printf("not prime");
                return 0;
            }
        }
        printf("prime");
    }
    return 0;
}