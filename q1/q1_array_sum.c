#include <stdio.h>

int array_sum(int* arr, int n);

int main()
{
    int arr[5] = { 10, 4, 6, 8, 2 };
    int sum = array_sum(arr, 5);

    printf("sum=%d\n", sum);
}

int array_sum(int* arr, int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}