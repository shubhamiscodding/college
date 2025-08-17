#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // points to last node
public:
    Stack() { top = NULL; }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;
        if (top == NULL) {
            top = newNode;
        } else {
            Node* temp = top;
            while (temp->next != NULL) temp = temp->next;
            temp->next = newNode;
        }
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        if (top->next == NULL) { // only one element
            delete top;
            top = NULL;
            return;
        }
        Node* temp = top;
        while (temp->next->next != NULL) temp = temp->next;
        delete temp->next;
        temp->next = NULL;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
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
