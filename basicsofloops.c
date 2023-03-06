#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // SCOPE of variables
    int i;
    for(i=1; i<=10; i=i+2)
    {
        printf("Hello World\n");
    }
    printf("%d", i);
    return 0;
}