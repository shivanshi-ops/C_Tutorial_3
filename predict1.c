#include<stdio.h>
int main()
{
    int x = 1;
    while(x == 10)
    { // condition likhi hoti hai, jab hume jyada cheeze na pata ho
        x = x - 1;
        printf("\n%d", x);
    }
    return 0;
}