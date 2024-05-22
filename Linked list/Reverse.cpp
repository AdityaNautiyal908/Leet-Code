#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node *head, *first, *second, *third, *four, *five;

Node* RemoveElement(Node* head, int val) {
    Node* ptr = head;
    Node* prev = nullptr;

    // Handle the case where the head node needs to be removed
    while (ptr != nullptr && ptr->data == val) {
        Node* temp = ptr;
        head = ptr->next;
        ptr = ptr->next;
        delete temp;
    }

    // Traverse the list and remove nodes with the given value
    while (ptr != nullptr) {
        if (ptr->data == val) {
            Node* temp = ptr;
            prev->next = ptr->next;
            ptr = ptr->next;
            delete temp;
        } else {
            prev = ptr;
            ptr = ptr->next;
        }
    }

    return head;
}

void print(Node* head) {
    Node* ptr = head;
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    first = new Node();
    second = new Node();
    third = new Node();
    four = new Node();
    five = new Node();

    head = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = four;

    four->data = 4;
    four->next = five;

    five->data = 3;
    five->next = nullptr;

    head = RemoveElement(head, 3);
    print(head);

    return 0;
}
