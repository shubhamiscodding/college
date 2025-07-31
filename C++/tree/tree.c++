#include <iostream>
#include <queue>  // Required for level order
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Build tree from preorder array with -1 for null
Node* insertion(int arr[], int& index, int size) {
    if (index >= size || arr[index] == -1) {
        index++;
        return nullptr;
    }

    Node* newnode = new Node(arr[index]);
    index++;

    newnode->left = insertion(arr, index, size);
    newnode->right = insertion(arr, index, size);

    return newnode;
}

// Preorder Traversal (Root -> Left -> Right)
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// ✅ Level Order Traversal (BFS)
void levelOrder(Node* root) {
    if (root == nullptr) return;
    int max=0;
    int min=root->data;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if(current->data>max){
            max=current->data;
        }else if(current->data<min){
            min=current->data;
        }
        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
    cout<<endl;
    cout<<"max value is"<<max<<endl;
     cout<<"min value is"<<min<<endl;
}

int main() {
    int arr[] = {10, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    Node* root = insertion(arr, index, size);

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Level Order Traversal: ";
    levelOrder(root);
    cout << endl;

    return 0;
}
