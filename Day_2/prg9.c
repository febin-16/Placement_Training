#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,sum=0,m,n,arr[100][100],upper[10],lower[10],diagonal[10],k=0,q=0,r=0;
    printf("enter the row and column size of array:");
    scanf("%d %d",&m,&n);
    printf("enter the array elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nthe array:\n");
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==j)
           {
                diagonal[r++]=arr[i][j];
           } 
           else if(i<j)
           {
                upper[q++]=arr[i][j];
           }
           else{
                lower[k++]=arr[i][j];
           }
        }
    }
    printf("upper\tlower\tdiagonal\tnon diagonal:\n");
    for(i=0;i<q+r;i++)
    {
        if(i<q)
            printf("%d",upper[i]);
        printf(" \t");    
        if(i<k)
            printf("%d",lower[i]);
        printf(" \t");     
        if(i<m)
            printf("%d",diagonal[i]);   
        printf(" \t\t"); 
        if(i<q)
            printf("%d",lower[i]);
        else
            printf("%d",upper[i-q]);
        printf("\n");                
    }
    return 0;
}    