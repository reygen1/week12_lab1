#include <iostream>
using namespace std;

void factorial(int n, int* fact) {
    *fact = 1;

    for (int i = 1; i <= n; i++) {
        *fact *= i;
    }
}

int main() {
    int fact;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    factorial(num, &fact);
    cout << "The factorial is: " << fact;

    return 0;
}