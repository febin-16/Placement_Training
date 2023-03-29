#include<stdio.h>
void main()
{
    float n;
    printf("Enter the candies of Sam : ");
    scanf("%f", &n);
    printf("\nCandies of Sam   : %.2f", 0.75*n);
    printf("\nCandies of Angel : %.2f", 0.25*n);
}