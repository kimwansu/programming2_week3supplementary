#include <stdio.h>

void get_area_perimeter(double w, double h, double* area, double* perimeter);
double area_and_p(double w, double h, double* perimeter);
double perimeter_and_a(double w, double h, double* area);

int main()
{
    double w = 16;
    double h = 12;
    double area;
    double perimeter;

    get_area_perimeter(w, h, &area, &perimeter);
    printf("%lf * %lf 직사각형의 넓이: %lf, 둘레:%lf\n", w, h, area, perimeter);

    area = area_and_p(w, h, &perimeter);
    printf("%lf * %lf 직사각형의 넓이: %lf, 둘레:%lf\n", w, h, area, perimeter);

    perimeter = perimeter_and_a(w, h, &area);
    printf("%lf * %lf 직사각형의 넓이: %lf, 둘레:%lf\n", w, h, area, perimeter);

    return 0;
}

void get_area_perimeter(double w, double h, double* area, double* perimeter)
{
    *area = w * h;
    *perimeter = w * 2 + h * 2;
}

double area_and_p(double w, double h, double* perimeter)
{
    double area = w * h;
    *perimeter = w * 2 + h * 2;

    return area;
}

double perimeter_and_a(double w, double h, double* area)
{
    double perimeter = w * 2 + h * 2;
    *area = w * h;

    return perimeter;
}