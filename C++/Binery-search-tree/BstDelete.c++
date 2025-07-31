// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int value){
      data = value;
      left = right = nullptr;
  }
};

Node* Bst(Node* root , int key){
    if(root == nullptr){
        return new Node(key);
    }
    if(key > root->data){
        root -> right = Bst (root->right,key);
    }
    if(key < root->data){
        root -> left = Bst (root->left,key);
    }
    return root;
}


Node* transfer(Node* root){
if(root -> right == nullptr){
    return root;
}    
return transfer(root->right);
}



Node* check(Node* root){
    if(root->left == nullptr){
        return root->left;
    }
    if(root->right == nullptr){
        return root->right;
    }
    
    Node* rightnode = root -> right;
    Node* leftrightnode = transfer(root->left);
    
    leftrightnode -> right = rightnode;
    return root -> left;
    
}


Node* Bstdelete(Node* root,int k){
    if(root == nullptr) return nullptr;
    Node* temp = root;
    while (temp != nullptr){
        if(temp -> data > k){
            if(temp -> left != nullptr && temp -> left -> data == k){
                temp -> left = check(temp->left);
                break;
            }else{
                temp = temp -> left;
            }
        }else if(temp -> data < k){
         if(temp -> right != nullptr && temp -> right -> data == k){
                temp -> right = check(temp->right);
                break;
            }else{
                temp = temp -> right;
            }   
        }
    }
    return root;    
}


void levelOrder(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
    cout<<endl;
}

int main() {
    int elements[] = {10, 5, 15, 3, 8};
    Node* root = nullptr;
    for (int key : elements)
        root = Bst(root, key);
    levelOrder(root);
    
    cout << endl;
    
    Bstdelete(root,5);
    levelOrder(root);
    
    return 0;
}