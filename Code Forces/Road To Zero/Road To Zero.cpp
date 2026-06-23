#include <iostream>
#include <vector>
using namespace std;

int main() {
    short t;
    cin >> t;
    vector<long long> v;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long a, b;
        cin >> a >> b;

        long long mi = min(x, y);
        long long ma = max(x, y);

        v.push_back(mi * min(b, 2 * a) + (ma - mi) * a);
    }
    for (auto it : v) {
        cout << it << endl;
    }

}
