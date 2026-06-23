#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<long long > v(n);
    for (auto& it : v)cin >> it;

    int iteration = 500; 
    long double l = 0, r = 1e7, ans = 0;
    while (iteration-- && l <= r) {
        long double mid = (l + r) / 2;
        long long res = 0;
        for (int i = 0; i < n; i++) res += floor((v[i] / mid));
        if (res >= k) {
            l = mid;
            ans = mid;
        }
        else r = mid;
    }
    cout <<fixed<<setprecision(6)<< ans;


}