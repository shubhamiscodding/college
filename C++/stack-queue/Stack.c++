#include <iostream>    // Include the iostream header for input and output operations
using namespace std;   // Use the std namespace to simplify code
class Node {
public:
    int data;          // Data of the node
    Node* next;        // Pointer to the next node in the linked list
};
class Stack {
private:
    Node* top;          // Pointer to the top of the stack
public:
    Stack() {
        top = NULL;      // Initialize top pointer to NULL (empty stack)
    }
    void push(int x) {
        Node* newNode = new Node();  // Create a new node
        newNode->data = x;           // Set the data of the new node to the input value
        newNode->next = top;         // Set the next pointer of the new node to the current top
        top = newNode;               // Update the top pointer to the new node
    }
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;  // If the stack is empty, display an error message
            return;
        }
        Node* temp = top;            // Temporary pointer to the current top
        top = top->next;             // Update the top pointer to the next node
        delete temp;                 // Delete the old top node
    }
    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;  // If the stack is empty, display an empty message
            return;
        }
        Node* temp = top;            // Temporary pointer to traverse the stack
        cout << "Stack elements are: ";
        while (temp != NULL) {       // Traverse the stack and print each element
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Stack stk;                      // Create a stack object
    cout << "Input some elements onto the stack (using linked list):\n";
    stk.push(6);
    stk.push(5);
    stk.push(3);
    stk.push(1);
    stk.display();                 // Display the elements in the stack
    cout << "\nRemove 2 elements from the stack:\n";
    stk.pop();
    stk.pop();
    stk.display();                 // Display the updated stack
    cout << "\nInput 2 more elements:\n";
    stk.push(8);
    stk.push(9);
    stk.display();                 // Display the final state of the stack
    return 0;
}
