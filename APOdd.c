#include<stdio.h>
int main()
{
    // int n; // Odd AP
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for(int i=1; i<=2*n-1; i=i+2)
    // {
    //     printf("%d ", i);
    // }
    int n; // AP - 4, 7, 10, 13, 16
    printf("\nEnter a number : ");
    scanf("%d", &n);
    for(int i=4; i<=3*n+1; i=i+3)
    {
        printf("%d ", i);
    }
    return 0;
}