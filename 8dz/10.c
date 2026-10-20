#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RU");

    double x, p = 1.0;
    int a = 1, b = 2;

    printf("Введите x: ");
    scanf_s("%lf", &x);

    for (int i = 0; i < 6; i++)
    {
        p *= (x - a) / (x - b);
        a = 2 * a + 1;
        b = 2 * b;
    }

    printf("Результат: %.6f\n", p);

    return 0;
}