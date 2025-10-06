#include <iostream>
using namespace std;

void printName(int i, int n) {
    if (i > n) return; // base case
    cout << "Madxra" << endl;
    printName(i + 1, n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printName(1, n);
    return 0;
}
