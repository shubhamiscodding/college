
// HARD ONE

// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <vector>
// using namespace std;

// void insertIntoHeapify(vector<int> &heap)
// {

//     int i = heap.size() - 1;

//     while (i > 1 && heap[i] > heap[i / 2])
//     {
//         swap(heap[i], heap[i / 2]);
//         i = i / 2;
//     }
// }

// void heapify(vector<int> &heap)
// {
//     int i = (heap.size() - 1) / 2;
//     while (i > 1)
//     {
//         if (heap[i] < heap[i * 2])
//         {
//             swap(heap[i], heap[i * 2]);
//         }
//         if (heap[i] < heap[(i * 2) + 1])
//         {
//             swap(heap[i], heap[(i * 2) + 1]);
//         }
//         if (heap[i] > heap[i / 2])
//         {
//             insertIntoHeapify(heap);
//         }
//         i = --i;
//     }
// }

// void sortedheapify(vector<int> &heap, vector<int> &sort)
// {
//     int size = heap.size() - 1;
//     while (sort.size() != size)
//     {
//         sort.insert(sort.begin(), heap[1]);
//         heap.erase(heap.begin() + 1);
//         heapify(heap);
//     }
// }

// int main()
// {
//     int arr[] = {10, 2, 4, 3, 5, 8, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     vector<int> heap;

//     heap.push_back(0);

//     for (int j = 0; j < size; j++)
//     {
//         heap.push_back(arr[j]);
//         insertIntoHeapify(heap);
//     }

//     for (int i = 1; i < heap.size(); i++)
//     {
//         cout << heap[i] << " ";
//     }

//     heapify(heap);
//     cout << endl;

//     vector<int> sort;

//     sortedheapify(heap, sort);
//     for (int i = 0; i < sort.size(); i++)
//     {
//         cout << sort[i] << " ";
//     }

//     return 0;
// }



// EASY ONE

// #include <iostream>
// #include <vector>
// using namespace std;

// void heapifyMax(vector<int>& heap, int n, int i) {
//     int largest = i;
//     int l = 2 * i + 1; 
//     int r = 2 * i + 2; 

//     if (l < n && heap[l] > heap[largest])  largest = l;
//     if (r < n && heap[r] > heap[largest]) largest = r;

//     if (largest != i) {
//         swap(heap[i], heap[largest]);
//         heapifyMax(heap, n, largest);
//     }
// }

// void heapSort(vector<int>& heap) {
//     int n = heap.size();
//     for (int i = n - 1; i > 0; i--) {
//         swap(heap[0], heap[i]); 
//         heapifyMax(heap, i, 0);
//     }
// }

// int main() {
//     vector<int> heap = {10 , 5, 8, 2, 3, 4, 6}; 
//     int n = heap.size();

//     for (int i = (n / 2) - 1; i >= 0; i--) {
//         heapifyMax(heap, n, i);
//     }
    
//     for (int val : heap) {
//         cout << val << " ";
//     }
//     cout << endl;

//     heapSort(heap);
//         for (int i = 0; i < n; i++) {
//         cout << heap[i] << " ";
//         }

//     cout << endl;
// }