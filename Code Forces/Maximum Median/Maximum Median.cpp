
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k; cin >> n >> k;
    vector <long long> v(n);
    for (auto& it : v)cin >> it;

    sort(v.begin(), v.end());
    long long l = v[n / 2], r = v[n / 2] + k, ans = v[n / 2];

    while (l<=r) {
        long long mid = (l + r) / 2;
        long long sum = 0;
        for (long long i = n / 2; i < n; i++) {
            if (mid > v[i])sum += (mid - v[i]);
        }
        if (sum <= k) {
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;

    }
    cout << ans;
}
