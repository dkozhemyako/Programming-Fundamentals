/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 2.3
 */

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// Структура для стека
struct Stack {
    double data[MAX_SIZE]; // масив для зберігання 
    int top; // індекс стека

    // Конструктор 
    Stack() {
        top = -1; // стек порожній
    }

    // Метод для додавання елемента
    void push(double value) {
        if (top < MAX_SIZE - 1) {
            data[++top] = value; // зберігаємо елемент
        }
        else {
            cout << "Стек переповнений!" << endl;
        }
    }

    // Метод для видалення елемента
    double pop() {
        if (top >= 0) {
            return data[top--]; // повертаємо верхній елемент
        }
        else {
            cout << "Стек порожній!" << endl;
            return -1; // позначення помилки
        }
    }
};

// Структура для вузла односпрямованого списку
struct Node {
    int data; // дані
    Node* next; // вказівник на наступний елемент
};

// Структура для односпрямованого списку
struct LinkedList {
    Node* head; // вказівник на перший елемент

    // Конструктор для ініціалізації списку
    LinkedList() {
        head = nullptr; // список порожній
    }

    // Метод для додавання елемента в кінець списку
    void append(int value) {
        Node* newNode = new Node(); // створюємо новий елемент
        newNode->data = value; // заповнюємо дані
        newNode->next = nullptr; // новий елемент вказує на нуль

        if (head == nullptr) {
            head = newNode; // якщо список порожній, новий елемент стає першим
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; // переходимо до кінця 
            }
            temp->next = newNode; // додаємо новий 
        }
    }

    // Метод для видалення всіх елементів списку
    void clear() {
        Node* temp;
        while (head != nullptr) {
            temp = head; // запам'ятовуємо 
            head = head->next; // до наступного
            delete temp; // видаляємо старий 
        }
    }
};

int main() {
    // Приклад стека
    Stack stack;
    stack.push(5.5);
    stack.push(10.0);
    cout << "Зняти зі стека: " << stack.pop() << endl;

    // Приклад списку
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    cout << "Елементи односпрямованого списку: ";

    // Виведення 
    Node* temp = list.head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next; // до наступного елемента
    }
    cout << endl;

    // Очистка 
    list.clear();

    return 0;
}

