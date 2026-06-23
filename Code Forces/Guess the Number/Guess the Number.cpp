#include <bits/stdc++.h>
using namespace std;

int main() {
    int l = 1, r = 1000000, ans = r;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        cout << mid << "\n" << flush;

        string s; cin >> s;

        if (s == "<") {
            r = mid - 1;
        }
        else { 
            ans = mid;
            l = mid + 1;
        }
    }

    cout << "! " << ans << "\n" << flush;
}