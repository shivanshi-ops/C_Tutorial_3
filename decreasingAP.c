#include<stdio.h>
int main()
{
    // Method 1

    // int n; 
    // printf("Enter number : ");
    // scanf("%d", &n);
    // // 100 97 94 ...
    // int a = 100;
    // for(int i=1; i<=n; i++)
    // {
    //     printf("%d ", a);
    //     a = a - 3;
    // }

    // Method 2

    // int a = 100;
    // for(int i=1; a>0; i++)
    // {
    //     printf("%d ", a);
    //     a = a - 3;
    // }

    // GP - 100 50 25
    int n; 
    printf("Enter number : ");
    scanf("%d", &n);
    float a = 100;
    for(int i=1; i<=n; i++)
    {
        printf("%f ", a);
        a = a / 2;
    }
    return 0;
}