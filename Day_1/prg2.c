#include<stdio.h>
void main()
{
    int sides[3], flag=0;
    printf("Enter the length of sides :\n");
    scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);
    for(int i=0; i<3; i++)
    {
        if(sides[i]+sides[(i+1)%3] < sides[(i+2)%3])
            flag = 1;
    }
    if(flag == 0)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
}