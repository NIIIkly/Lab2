#include <stdio.h>

// Функція для знаходження НСД (найбільшого спільного дільника)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Функція для знаходження НСК (найменшого спільного кратного)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n, i;
    int numbers[20];  // Масив для зберігання введених чисел
    int result;  // Змінна для зберігання результату

    // Ввід кількості чисел р
    printf("Введіть кількість чисел р: ");
    scanf("%d", &n);

    // Ввід натуральних чисел
    printf("Введіть %d натуральних чисел, розділених пробілом: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Знаходження НСК
    result = numbers[0];
    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    // Виведення результату
    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}
