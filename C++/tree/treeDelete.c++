// C++ program to delete a specific element
// in a binary tree
#include <bits/stdc++.h>
using namespace std;

class Node {
public:    
  	int data;
    Node *left, *right;
	Node(int x){
    	data = x;
      	left = right = nullptr;
    }
};

// Function to delete the deepest node in binary tree
void deletDeepest(Node* root, Node* dNode) {
    queue<Node*> q;
    q.push(root);

    Node* curr;
    while (!q.empty()) {
        curr = q.front();
        q.pop();

        // If current node is the deepest
      	// node, delete it
        if (curr == dNode) {  
            curr = nullptr;
            delete (dNode);
            return;
        }

        // Check the right child first
        if (curr->right) {
          
            // If right child is the deepest
          	// node, delete it
            if (curr->right == dNode) {
                curr->right = nullptr;
                delete (dNode);
                return;
            } 
            q.push(curr->right);
        }

        // Check the left child
        if (curr->left) {
          
            // If left child is the deepest 
          	// node, delete it
            if (curr->left == dNode) {
                curr->left = nullptr;
                delete (dNode);
                return;
            } 
            q.push(curr->left);
        }
    }
}

// Function to delete the node with the given key
Node* deletion(Node* root, int key) {
  
    // If the tree is empty, return null
    if (root == nullptr)
        return nullptr;

    // If the tree has only one node
    if (root->left == nullptr && root->right == nullptr) {
      
        // If the root node is the key, delete it
        if (root->data == key)
            return nullptr;
        else
            return root;
    }

    queue<Node*> q;
    q.push(root);

    Node* curr;
    Node* keyNode = nullptr;

    // Level order traversal to find the deepest
  	// node and the key node
    while (!q.empty()) {
        curr = q.front();
        q.pop();

        // If current node is the key node
        if (curr->data == key)
            keyNode = curr;

        if (curr->left)
            q.push(curr->left);

        if (curr->right)
            q.push(curr->right);
    }

    // If key node is found, replace its data
  	// with the deepest node
    if (keyNode != nullptr) {
      
      	// Store the data of the deepest node
        int x = curr->data;  
      
      	// Replace key node data with deepest
      	// node's data
        keyNode->data = x;  
      
      	// Delete the deepest node
        deletDeepest(root, curr);  
    }
    return root;
}

// Inorder traversal of a binary tree
void inorder(Node* curr) {
    if (!curr)
        return;
    inorder(curr->left);        
    cout << curr->data << " ";  
    inorder(curr->right);     
}

int main() {
  
    // Construct the binary tree
    //       10         
  	//      /  \       
  	//    11    9
  	//   / \   / \     
  	//  7  12 15  8     

    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(9);
    root->left->left = new Node(7);
    root->left->right = new Node(12);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    int key = 11;
    root = deletion(root, key); 

    inorder(root);
    return 0;
}