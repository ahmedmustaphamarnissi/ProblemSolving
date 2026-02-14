#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (k == 0) {
        if (v[0] > 1) cout << 1;
        else cout << -1;
    }

    else if (k < n && v[k - 1] == v[k]) {
        cout << -1;
    }
    else {
        cout << v[k - 1];
    }
}

