#include <iostream>
using namespace std;

void print1toN_backtrack(int i, int n) {
    if (i < 1) return;
    print1toN_backtrack(i - 1, n); // recursive call first
    cout << i << " ";              // print while returning
}

int main() {
    int n = 5;
    print1toN_backtrack(n, n);
    return 0;
}
