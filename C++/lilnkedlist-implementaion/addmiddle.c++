
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
}; // For Making a node

class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to add a node at the middle
    void append(int value) {
        
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
           
        }

        temp->next = newNode;
    }
    
       // Function to add a node at the middle
       void addmiddle(int value){
        Node* newNode=new Node(value);

        if(head==nullptr||value<head->data){
            newNode->next=head;
            head=newNode;
            return;
        }
        
        Node* temp=head;
        while(temp->next!=nullptr && temp->data<value && temp->next->data<value){
            temp=temp->next;
        }
        
        newNode->next=temp->next;
        temp->next=newNode;

       }

    // Function to print the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);
    list.addmiddle(5);
    list.display();  // Output: 10 → 20 → 30 → NULL

    return 0;
}