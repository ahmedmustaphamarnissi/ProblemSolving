#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector<ll> v(n);
    for (auto& it : v) cin >> it;
    sort(v.begin(), v.end());

    int q;cin >> q;
    while (q--) {
        ll coin;
        cin >> coin;
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (coin >= v[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << l << "\n";
    }
}