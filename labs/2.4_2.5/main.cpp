/**
 * Done by:
 * Student Name: Dima Kozhemiako
 * Student Group: 123
 * Lab 2.4_2.5
 */

#include <iostream> 

using namespace std;

struct Node {
    int data;
    Node* next;
};

inline void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

inline void addToFront(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}


inline void addToEnd(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

inline void removeFromFront(Node** head) {
    if (*head != nullptr) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

inline void removeFromEnd(Node** head) {
    if (*head == nullptr) return;

    if ((*head)->next == nullptr) {
        delete* head;
        *head = nullptr;
        return;
    }

    Node* current = *head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}


inline Node* searchElement(Node* head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}


inline void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "null" << endl;
}


inline void reverseList(Node** head) {
    Node* prev = nullptr;
    Node* current = *head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

inline void sortList(Node** head) {
    if (*head == nullptr) return;

    bool swapped;
    do {
        swapped = false;
        Node* current = *head;
        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                mySwap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

inline void clearList(Node** head) {
    while (*head != nullptr) {
        removeFromFront(head);
    }
}

int main() {
    Node* head = nullptr;

    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);

    cout << "List after adding: ";
    printList(head);

    removeFromFront(&head);
    cout << "List after removing: ";
    printList(head);

    addToEnd(&head, 40);
    addToEnd(&head, 50);
    cout << "List after adding to the end: ";
    printList(head);

    Node* found = searchElement(head, 40);
    if (found) {
        cout << "Element " << found->data << " found in the list." << endl;
    }
    else {
        cout << "Element not found in the list." << endl;
    }

    reverseList(&head);
    cout << "List after reversing: ";
    printList(head);

    sortList(&head);
    cout << "List after sorting: ";
    printList(head);

    clearList(&head);
    cout << "List after clearing: ";
    printList(head);

    return 0;
}


