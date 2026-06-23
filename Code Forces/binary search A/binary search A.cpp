#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin >> n;
    vector <int> s(n);
    for (auto &it : s) {
        cin >> it;
    }
    cin >> q;

    while (q--) {
        int l = 0, r = n - 1, ans = 0;
        int num; cin >> num;
        while (r >= l) {
            int mid = (r + l) / 2;
            if (s[mid] == num) {
                ans = 1;
                break;
            }
            else if (s[mid] > num) r = mid - 1;
            else if (s[mid] < num) l = mid + 1;
        }
        if (ans == 1) cout << "YES\n";
        else cout << "NO\n";

        /*if (binary_search(s.begin(), s.end(), num)) cout << "YES\n";
        else cout << "NO\n";*/
    }

}
