#include <stdio.h>
void fib(int num)
{
    int t1 = 0, t2 = 1, nextTerm;
    if (num >= 1) {
        printf("Fibonacci series: %d", t1);
    }
    if (num >= 2) {
        printf(" %d", t2);
    }
    for (int i = 3; i <= num; i++)
    {
        nextTerm = t1 + t2;
        printf(" %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}
