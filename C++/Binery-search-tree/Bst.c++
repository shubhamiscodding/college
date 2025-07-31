// Online C++ compiler to run C++ program online
#include <iostream>
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


Node* Bst(Node* root,int key){
    if(root == nullptr){
        return new Node(key);
    }
    if(key < root->data){
        root -> left = Bst(root->left,key);
    }
    else if(key > root->data){
        root -> right = Bst(root->right,key);
    }
    return root;
}

void preoder(Node* root){
    if(root == nullptr){
        return;
    }
    cout << root->data << " ";
    preoder(root->left);
    preoder(root->right);
}

int main() {
    int elements[] = {10, 5, 15, 3, 8};
    Node* bstRoot = nullptr;
    for (int key : elements)
        bstRoot = Bst(bstRoot, key);

    cout << "Preorder (Binary Search Tree): ";
    preoder(bstRoot);
    cout << endl;
    return 0;
}