/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 2.3
 */

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

// ��������� ��� �����
struct Stack {
    double data[MAX_SIZE]; // ����� ��� ��������� 
    int top; // ������ �����

    // ����������� 
    Stack() {
        top = -1; // ���� �������
    }

    // ����� ��� ��������� ��������
    void push(double value) {
        if (top < MAX_SIZE - 1) {
            data[++top] = value; // �������� �������
        }
        else {
            cout << "���� ������������!" << endl;
        }
    }

    // ����� ��� ��������� ��������
    double pop() {
        if (top >= 0) {
            return data[top--]; // ��������� ������ �������
        }
        else {
            cout << "���� �������!" << endl;
            return -1; // ���������� �������
        }
    }
};

// ��������� ��� ����� ���������������� ������
struct Node {
    int data; // ���
    Node* next; // �������� �� ��������� �������
};

// ��������� ��� ���������������� ������
struct LinkedList {
    Node* head; // �������� �� ������ �������

    // ����������� ��� ����������� ������
    LinkedList() {
        head = nullptr; // ������ �������
    }

    // ����� ��� ��������� �������� � ����� ������
    void append(int value) {
        Node* newNode = new Node(); // ��������� ����� �������
        newNode->data = value; // ���������� ���
        newNode->next = nullptr; // ����� ������� ����� �� ����

        if (head == nullptr) {
            head = newNode; // ���� ������ �������, ����� ������� ��� ������
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; // ���������� �� ���� 
            }
            temp->next = newNode; // ������ ����� 
        }
    }

    // ����� ��� ��������� ��� �������� ������
    void clear() {
        Node* temp;
        while (head != nullptr) {
            temp = head; // �����'������� 
            head = head->next; // �� ����������
            delete temp; // ��������� ������ 
        }
    }
};

int main() {
    // ������� �����
    Stack stack;
    stack.push(5.5);
    stack.push(10.0);
    cout << "����� � �����: " << stack.pop() << endl;

    // ������� ������
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    cout << "�������� ���������������� ������: ";

    // ��������� 
    Node* temp = list.head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next; // �� ���������� ��������
    }
    cout << endl;

    // ������� 
    list.clear();

    return 0;
}

