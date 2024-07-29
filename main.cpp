#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long n, k;
    vector<long long> temp;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    {
        if (i%2 == 1) {
            temp.push_back(i);
        }
    }
    for (long long i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            temp.push_back(i);
        }
    }
    cout << temp.at(k - 1) << endl;

    return 0;
}