#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // Create a vector with initial values
    vector<int> arr = {1, 5, 2, 3, 7, 8, 5, 6};

    // Sort the vector in ascending order
    sort(arr.begin(), arr.end());

    auto it = find(arr.begin(), arr.end(), 5);
if (it != arr.end()) {
    cout << *it << endl;  // Dereference the iterator to get the value
} else {
    cout << "Not found" << endl;
}


    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

