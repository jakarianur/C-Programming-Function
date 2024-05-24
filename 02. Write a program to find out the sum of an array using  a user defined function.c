#include <stdio.h>
int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int totalSum = sumOfArray(arr, n);
    printf("The sum of the array elements is: %d\n", totalSum);

    return 0;
}

