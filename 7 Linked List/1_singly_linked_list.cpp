//https://www.geeksforgeeks.org/dsa/introduction-to-linked-list-data-structure/


// The size of memory can be allocated or
//  de-allocated at run time based on the operation insertion or deletion.
// Linked list is a linear data structure where elements are not stored at contiguous memory locations.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign values
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Traversing the list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
