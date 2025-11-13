#include <iostream>
using namespace std;

int findLargestElement(int* arr, int size) {
    int* maxPtr = arr;

    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }

    return *maxPtr;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = findLargestElement(arr, n);
    cout << "The largest element is: " << largest;

    return 0;
}