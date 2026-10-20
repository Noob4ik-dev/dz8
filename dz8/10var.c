#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RU");

    double x, s = 1;
    int i, k;

    printf("Введите значение x: ");
    scanf_s("%lf", &x);

    for (i = 1, k = 2; i <= 6; i++, k *= 2)
    {
        if (x == k)
        {
            printf("Ошибка: деление на ноль!\n");
            return 0;
        }

        s *= (x - (k - 1)) / (x - k);
    }

    printf("Результат: %.6f\n", s);

    return 0;
}