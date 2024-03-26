#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru ke linked list
void insertNode(Node** head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Fungsi untuk mencetak linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Menambahkan node ke linked list
    insertNode(&head, 5);
    insertNode(&head, 10);
    insertNode(&head, 15);

    // Mencetak linked list
    cout << "Linked List: ";
    printList(head);

    return 0;
}
