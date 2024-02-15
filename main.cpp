#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // current element to be compared
        int j = i - 1;    // index of the previous element

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Place the current element at its correct position
    }
}

int main() {
    vector<int> myArray = {12, 11, 13, 5, 6};

    insertionSort(myArray);

    cout << "Sorted array:";
    for (int num : myArray) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
