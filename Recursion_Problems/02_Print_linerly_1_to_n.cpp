#include <iostream>
using namespace std;

void print1toN(int i, int n) {
    if (i > n) return; // base case
    cout << i << " ";
    print1toN(i + 1, n);
}

int main() {
    int n = 5;
    print1toN(1, n);
    return 0;
}
