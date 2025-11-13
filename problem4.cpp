// #include<iostream>
// using namespace std;
// int  sumArray(int* arr, int size) {
//     int* start = arr;
//     int* end = arr + size - 1;
//     int sum = 0;
//     while (start < end) {
//      sum += *start;
//         start++;
//     }
//     return sum;
// }
//
// int main () {
//     int n; cin>> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//
//     }
//     sumArray(arr, n);
//
//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    int* end = arr + size;

    while (arr < end) {
        sum += *arr;
        arr++;
    }
    return sum;
}

int main () {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Sum is: 0" << endl;
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total_sum = sumArray(&arr[0], n);

    cout << "Sum of elements is: " << total_sum << endl;

    return 0;
}