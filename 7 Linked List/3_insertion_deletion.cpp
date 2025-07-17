#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Linked List class
class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Create a list of size N
    void createList(int n) {
        for (int i = 1; i <= n; ++i) {
            insertAtEnd(i);
        }
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    // Insert at position (1-based)
    void insertAtPosition(int pos, int val) {
        Node* newNode = new Node(val);
        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp; ++i)
            temp = temp->next;
        if (!temp) {
            cout << "Position out of range.\n";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete at position (1-based)
    void deleteAtPosition(int pos) {
        if (!head) return;
        if (pos == 1) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next; ++i)
            temp = temp->next;
        if (!temp->next) {
            cout << "Position out of range.\n";
            return;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Reverse the list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    LinkedList list;
    list.createList(100); // Creates 1 to 100
    cout << "Original list:\n";
    list.display();

    list.reverse();
    cout << "\nReversed list:\n";
    list.display();

    list.insertAtPosition(1, 999);  // Insert at head
    list.insertAtPosition(50, 888); // Insert at middle
    list.insertAtPosition(105, 777); // Out of range

    cout << "\nAfter insertion:\n";
    list.display();

    list.deleteAtPosition(1);  // Delete head
    list.deleteAtPosition(50); // Delete middle
    list.deleteAtPosition(200); // Out of range

    cout << "\nAfter deletion:\n";
    list.display();

    return 0;
}
