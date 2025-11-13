#include <iostream>

using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    if (size <= 0) {
        return;
    }

    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
}

int main() {
    int numbers[] = {45, 12, -8, 101, 3, 55, 9, 23};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int minResult;
    int maxResult;

    findMinMax(numbers, size, minResult, maxResult);

    cout << "Array elements: ";
    for(int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Minimum value is: " << minResult << endl;
    cout << "Maximum value is: " << maxResult << endl;

    return 0;
}