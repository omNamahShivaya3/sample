#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long n, k;
    cin >> n >> k;
    long long num_odd = (n + 1) / 2;

    if (k <= num_odd) {
        cout << 2 * k - 1 << endl;
    }
    else {
        cout << 2 * (k - num_odd) << endl;
    }
    return 0;
}