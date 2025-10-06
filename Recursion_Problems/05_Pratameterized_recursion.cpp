#include <iostream>
using namespace std;

void sumParam(int i, int sum) {
    if (i < 1) {
        cout << "Sum = " << sum << endl;
        return;
    }
    sumParam(i - 1, sum + i); // passing new sum as parameter
}

int main() {
    int n = 5;
    sumParam(n, 0);
    return 0;
}
