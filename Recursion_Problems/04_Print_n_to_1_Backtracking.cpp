#include <iostream>
using namespace std;

void printNto1_backtrack(int i, int n) {
    if (i > n) return;
    printNto1_backtrack(i + 1, n); // go till n
    cout << i << " ";              // print while coming back
}

int main() {
    int n = 5;
    printNto1_backtrack(1, n);
    return 0;
}
