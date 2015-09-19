#include <stdio.h>

double array_avg(double* arr, int n);

int main()
{
    double arr[5] = { 7.2, 5.5, 7.8, 1.6, 4.1 };
    double avg = array_avg(arr, 5);

    printf("avg=%lf\n", avg);
}

double array_avg(double* arr, int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum / n;
}