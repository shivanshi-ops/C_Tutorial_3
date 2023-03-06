#include<stdio.h>
int main()
{
    int n; // itni baar loop chalega
    printf("\nEnter a number : ");
    scanf("%d", &n);
    // 4 7 10 13 16 19 ... upto n number of terms
    //we are going to use extra variables
    int a = 4; 
    for(int i=1; i<=n; i++)
    {
        printf("%d ", a);
        a = a + 3;
    }
    // 1 3 5 7 9 ... upto n number of terms
    //we are going to use extra variables
    // int a = 1; 
    // for(int i=1; i<=n; i++)
    // {
    //     printf("%d ", a);
    //     a = a + 2;
    // }
    return 0;
}