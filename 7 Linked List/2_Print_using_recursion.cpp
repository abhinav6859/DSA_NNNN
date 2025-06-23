#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function to print the singly linked list
void printList(Node* head) {

    // Base condition is when the head is nullptr
    if (head == nullptr) {
        return;
    }

    // Printing the current node data
    cout << head->data << " ";

    // Moving to the next node
    printList(head->next);
}

int main() {
  
    // Create a linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printList(head);

    return 0;
}