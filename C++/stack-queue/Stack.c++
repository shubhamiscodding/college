#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* base; // points to last node
public:
    Stack() { base = NULL; }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;
        if (base == NULL) {
            base = newNode;
        }
        Node* temp = base;
        while (temp->next != NULL) temp = temp->next;
            temp->next = newNode;
    }

    void pop() {
        if (base == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        if (base->next == NULL) { // only one element
            delete base;
            base = NULL;
            return;
        }
        Node* temp = base;
        while (temp->next->next != NULL) temp = temp->next;
        delete temp->next;
        temp->next = NULL;
    }

    void display() {
        if (base == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = base;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stk;
    cout << "Push elements:\n";
    stk.push(6);
    stk.push(5);
    stk.push(3);
    stk.push(1);
    stk.display();

    cout << "\nPop 2 elements:\n";
    stk.pop();
    stk.pop();
    stk.display();

    cout << "\nPush 2 more elements:\n";
    stk.push(8);
    stk.push(9);
    stk.display();

    return 0;
}
