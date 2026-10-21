#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int zad0();
int zad1();
int zad1a();
int zad2();
int zad3();

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    zad0();
    zad1();
    zad1a();
    zad2();
	zad3();

    return 0;
}

int zad0()
{
    int n, i;
    char symbol, symbol2;

    printf("Задание 0\n");
    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите первый символ: ");
    scanf(" %c", &symbol);

    printf("Введите второй символ: ");
    scanf(" %c", &symbol2);

    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
            printf("%c", symbol);
        else
            printf("%c", symbol2);
    }

    printf("\n");
    return 0;
}

int zad1()
{
    int m, n, i, k = 1;
    int s = 0;

    printf("\nЗадание 1\n");
    printf("Введите m и n: ");

    if (scanf("%d%d", &m, &n) != 2 || m > n)
    {
        printf("Ошибка ввода!\n");
        return 1;
    }

    for (i = m; i <= n; i++)
    {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }

    printf("Результат: %d\n", s);
    return 0;
}

int zad1a()
{
    int n, i;
    double result = 1.0;

    printf("\nЗадание 1А\n");
    printf("Введите степень n (от 0 до 30): ");

    if (scanf("%d", &n) != 1 || n < 0 || n > 30)
    {
        printf("Ошибка! Введите целое число от 0 до 30.\n");
        return 1;
    }

    for (i = 0; i <= n; i++)
    {
        if (i == 0)
            result = 1.0;
        else
            result *= 2.0;

        printf("2^%d = %10.0f\n", i, result);
    }

    printf("Результат: %.1fK\n", result / 1024.0);

    return 0;
}

int zad2()
{
    double x, y, h;

    printf("Функция: y = x^2 - cos^2(x + 1)\n");
    printf("Введите шаг табуляции: ");
    scanf("%lf", &h);

    if (h <= 0)
    {
        printf("Ошибка! Шаг должен быть больше нуля.\n");
        return 1;
    }

    printf("\n--------------------------------\n");
    printf("|     x     |       f(x)       |\n");
    printf("--------------------------------\n");

    for (x = 0.1; x <= 2.2 + 1e-9; x += h)
    {
        y = x * x - pow(cos(x + 1), 2);
        printf("| %9.3f | %16.6f |\n", x, y);
    }

    printf("--------------------------------\n");

    return 0;
}

int zad3()
{
    int N, i;
    double S = 0;

    printf("Введите N (N < 10): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        S += pow(-1, i + 1) * (1.0 + i / 10.0);

    printf("Результат: %.2f\n", S);

    return 0;
}