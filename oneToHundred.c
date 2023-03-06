#include<stdio.h>
int main()
{
    for(int i=1; i<=100; i++) // even numbers from 1 to 100
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    for(int i=1; i<=100; i++) // odd numbers from 1 to 100
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    for(int i=19; i<=190; i=i+19) // table of 19
    {
        printf("%d ", i);
    }
    int n; //table of any number
    printf("\nEnter a number : ");
    scanf("%d", &n);
    for(int i=n; i<=n*10; i=i+n)
    {
        printf("%d ", i);
    }
    return 0;
}