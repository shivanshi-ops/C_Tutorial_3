#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // // 1 2 4 8 16 32 ...
    // int a = 1;
    // for(int i=1; i<=n; i++)
    // {
    //     printf("%d ", a);
    //     a = a * 2;
    // }

    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    // 3 12 48 ...
    int a = 3;
    for(int i=1; i<=n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
    return 0;
}