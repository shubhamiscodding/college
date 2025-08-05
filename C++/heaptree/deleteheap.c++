#include <iostream>
#include <vector>
using namespace std;

// Function to insert element into max-heap
void insertIntoHeap(vector<int>& heap, int value) {
    heap.push_back(value);
    int i = heap.size() - 1;

    // Bubble up to maintain max-heap property
    while (i > 1 && heap[i] > heap[i / 2]) {
        swap(heap[i], heap[i / 2]);
        i = i / 2;
    }
}

// Function to heapify down from given index
void heapifyDown(vector<int>& heap, int i) {
    int size = heap.size();
    while (2 * i < size) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;

        if (left < size && heap[left] > heap[largest])
            largest = left;
        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            i = largest;
        } else {
            break;
        }
    }
}

// Function to delete max (root) from heap
void deleteFromHeap(vector<int>& heap) {
    int size = heap.size();
    if (size <= 1) {
        cout << "Heap is empty." << endl;
        return;
    }

    cout << "Deleted element: " << heap[1] << endl;

    heap[1] = heap[size - 1]; // Move last element to root
    heap.pop_back();         // Remove last element
    heapifyDown(heap, 1);    // Heapify down from root
}

int main() {
    int arr[] = {10, 2, 4, 3, 5, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> heap;
    heap.push_back(0); // Dummy element at index 0 for 1-based indexing

    for (int j = 0; j < size; j++) {
        insertIntoHeap(heap, arr[j]);
    }

    // Output the heap (excluding dummy element)
    cout << "Heap after insertion: ";
    for (int i = 1; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    // Delete root and show result
    deleteFromHeap(heap);

    cout << "Heap after deletion: ";
    for (int i = 1; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    return 0;
}
