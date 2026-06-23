
#include<bits/stdc++.h>
using namespace std;
long long n;
short k;
bool can(long long mid) {
    long long sum = 0;

    while (mid > 0) {
        sum += mid;
        mid /= k;
    }

    return sum >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;

    long long l = 1, r = n, ans = n;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (can(mid)) {
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;

    }
    cout << ans;
}