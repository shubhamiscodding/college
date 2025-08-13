// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void insertIntoHeapify(vector<int>& heap) {
    
    int i = heap.size() - 1;
    
    while (i > 1 && heap[i] > heap[i / 2]) {
        swap(heap[i], heap[i / 2]);
        i = i / 2;
    }
}

void heapify(vector<int>& heap){
    int i  = (heap.size() - 1)/2; 
    while(i > 1){
        if(heap[i] < heap[i*2]){
            swap(heap[i],heap[i*2]);
        }
        if(heap[i] < heap[(i*2)+1]){
            swap(heap[i],heap[(i*2)+1]);
        }
        if(heap[i] > heap[i/2]){
            insertIntoHeapify(heap);
        }
        i = --i;
    }   
}


int main() {
    int arr[] = {10, 2, 4, 3, 5, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> heap;
    heap.push_back(0);
    
for (int j = 0; j < size; j++) {
    heap.push_back(arr[j]);
        insertIntoHeapify(heap);
}

for (int i = 1; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }

heapify(heap);
cout << endl;
for (int i = 1; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }
    return 0;
}

