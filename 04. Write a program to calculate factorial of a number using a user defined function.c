#include<stdio.h>
void fact()
{
    int num , i, result=1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        result*=i;
    }
    printf("Factorial is %d \n", result);
}
int main()
{
    fact();
    return 0;
}
