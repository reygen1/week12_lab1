#include<iostream>
using namespace std;
void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *end = temp;
        end--;
        start++;

    }
}

int main () {
    int n; cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];

    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}