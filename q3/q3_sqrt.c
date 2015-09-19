#include <stdio.h>
#include <math.h>

double square_sum_sqrt(double* arr, int n);

int main()
{
    double arr[5] = { 2, 3, 5, 7, 13 };
    double result = square_sum_sqrt(arr, 5);
    
    printf("°á°ú=%lf\n", result);

    return 0;
}

double square_sum_sqrt(double* arr, int n)
{
    int i;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(arr[i], 2);
    }

    return sqrt(sum);
}