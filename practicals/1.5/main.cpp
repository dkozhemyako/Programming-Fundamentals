#include <iostream>
#include <vector>
#include <limits> // Для std::numeric_limits

// Функція для знаходження індексу першого входження P
int findFirstOccurrence(const std::vector<int>& A, int P) {
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == P) {
            return i; // Повертаємо індекс
        }
    }
    return -1; // Якщо не знайдено
}

// Функція для знаходження найменшого значення серед додатних елементів
int findMinPositive(const std::vector<int>& A) {
    int minPositive = std::numeric_limits<int>::max();
    for (int num : A) {
        if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }
    return (minPositive == std::numeric_limits<int>::max()) ? -1 : minPositive; // Якщо немає додатних, повертаємо -1
}

// Функція для обміну найбільшого та найменшого значення
void swapMinMax(std::vector<int>& A) {
    if (A.empty()) return;

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < A.size(); ++i) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    // Обмінюємо місцями
    std::swap(A[minIndex], A[maxIndex]);
}

int main() {
    int n, P;

    // Введення розміру послідовності
    std::cout << "Введіть кількість елементів: ";
    std::cin >> n;

    std::vector<int> A(n);

    // Введення елементів послідовності
    std::cout << "Введіть елементи послідовності:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    // Задача 1: Пошук першого входження P
    std::cout << "Введіть значення P: ";
    std::cin >> P;
    int index = findFirstOccurrence(A, P);
    if (index != -1) {
        std::cout << "Індекс першого входження P: " << index << std::endl;
    }
    else {
        std::cout << "Значення P не знайдено у послідовності." << std::endl;
    }

    // Задача 2: Знаходження найменшого додатного елемента
    int minPositive = findMinPositive(A);
    if (minPositive != -1) {
        std::cout << "Найменше додатнє значення: " << minPositive << std::endl;
    }
    else {
        std::cout << "Додатні елементи не знайдено." << std::endl;
    }

    // Задача 3: Обмін найбільшого та найменшого значення
    swapMinMax(A);
    std::cout << "Послідовність після обміну найбільшого та найменшого значення:\n";
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
