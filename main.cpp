#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long n, k;
    vector<int> temp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i%2 == 1) {
            temp.push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            temp.push_back(i);
        }
    }
    cout << temp.at(k - 1) << endl;

    return 0;
}