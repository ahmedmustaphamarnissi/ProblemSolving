#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t; cin >> t;
    vector<long long > res;

    while (t--) {
        long long a, b; cin >> a >> b;
        if (b > a) res.push_back(b - a);
        else if (a % b == 0) res.push_back(0);
        else res.push_back(b-(a % b));
    }
    for (auto it : res) {
        cout << it << endl;
    }

}
