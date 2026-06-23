#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (auto& i : a) cin >> i;
		int op = INT_MAX;
		while (op > 0 && !is_sorted(a.begin(), a.end())) {
			op = 0;
			for (int i = 1; i < n - 1; i += 1) {
				if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
					swap(a[i], a[i + 1]);
					op++;
				}
			}
		}
		if (is_sorted(a.begin(), a.end())) cout << "YES\n";
		else cout << "NO\n";
	}
}
