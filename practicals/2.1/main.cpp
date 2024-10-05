/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Prac 2.1
 */

#include <iostream>
#include <vector>

int main() {
    int m; // Кількість послідовностей
    std::cout << "Введіть кількість послідовностей: ";
    std::cin >> m;

    // Створюємо матрицю
    std::vector<std::vector<int>> A(m);

    // Введення даних
    for (int i = 0; i < m; i++) {
        int n; // Кількість елементів у поточній послідовності
        std::cout << "Введіть кількість елементів у послідовності " << i + 1 << ": ";
        std::cin >> n;

        A[i].resize(n); // Задаємо розмір послідовності
        std::cout << "Введіть елементи: ";
        for (int j = 0; j < n; j++) {
            std::cin >> A[i][j]; // Введення елементів
        }
    }

    // Пошук мінімального значення
    int minValue = A[0][0]; // Припустимо, що перше значення - мінімальне

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < A[i].size(); j++) {
            if (A[i][j] < minValue) {
                minValue = A[i][j]; // Оновлюємо мінімальне значення
            }
        }
    }

    // Пошук максимального від'ємного значення
    int maxNegative = 0; // Ініціалізація (припустимо, що не буде значень < 0)
    bool foundNegative = false; // Прапорець для перевірки

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < A[i].size(); j++) {
            if (A[i][j] < 0) {
                if (!foundNegative || A[i][j] > maxNegative) {
                    maxNegative = A[i][j]; // Оновлюємо максимальне від'ємне значення
                    foundNegative = true; // Знайдено від'ємне значення
                }
            }
        }
    }

    // Вивід результатів
    std::cout << "Мінімальне значення: " << minValue << std::endl;

    if (foundNegative) {
        std::cout << "Максимальне від'ємне значення: " << maxNegative << std::endl;
    }
    else {
        std::cout << "Від'ємних значень не знайдено." << std::endl;
    }

    return 0;
}
