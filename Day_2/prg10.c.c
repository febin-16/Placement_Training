#include<stdio.h>
#include<stdlib.h>
int n=5,i=0,s=0;
int Sample(int n){
    int r=0,p=0;
    while(n>0)
    {
        r=n%10;
        p=8^i;
        s=s+p*r;
        i=i+1;
    }
    return 0;
}
int main()
{
    n=Sample(n);
    printf("%d",&n);
    return 0;
}