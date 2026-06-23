#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long l = 1, r = 1e10, ans = 1; 
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        long long test = mid * (mid + 1) / 2; 
        if (n >= test) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans;
}