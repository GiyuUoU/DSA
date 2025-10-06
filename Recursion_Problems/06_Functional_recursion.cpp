// Sum of first N numbers (Functional)
#include <iostream>
using namespace std;

int sumFunc(int n) {
    if (n == 0)
        return 0;               // base case
    return n + sumFunc(n - 1);  // use return value of recursion
}

int main() {
    int n = 5;
    cout << "Sum = " << sumFunc(n) << endl;
    return 0;
}
