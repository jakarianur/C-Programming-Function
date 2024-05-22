#include <stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];}
    }
    return max;
}
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }int max = findMax(arr, n);
    printf("The maximum element in the array is: %d\n", max);
int min = findMin(arr, n);
    printf("The minimum element in the array is: %d\n", min);
return 0;
}
