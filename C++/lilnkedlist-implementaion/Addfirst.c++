// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
public:
int data;
node*next;

node(int value){
    data=value;
    next=nullptr;
}
};

class Linkedlist{
    private:
    node* head;
    
    public:
    Linkedlist(){
        head=nullptr;
    }
    
    //Now for adding a node at last
    void append(int value){
        node* newnode= new node(value);
        
        if(head==nullptr){
            head=newnode;
            return;
        }
        node* temp=head;
        while(temp->next !=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
     
    void addfirst(int value){
        node* firstnode=new node(value);
         node* temp=head;
        if(head!=nullptr){
            head=firstnode;
            firstnode->next=temp;
            return;
        }
        
        
    }
    
     void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " → ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Linkedlist list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.addfirst(40);

    list.display();  // Output: 10 → 20 → 30 → NULL

    return 0;
}

