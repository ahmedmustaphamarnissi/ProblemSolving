#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (auto& i : a)
			cin >> i;
		if (!is_sorted(a.begin(), a.end()))
			cout << 0 << '\n';
		else {
			long long diff = LLONG_MAX;
			for (int i = 1; i < n; i++) {
				if (a[i] == a[i - 1]) {
					diff = 1;
					break;
				}
				diff = min(diff, a[i] - a[i - 1]);
			}
			if (diff > 1)
				cout << (diff / 2) + 1 << '\n';
			else
				cout << 1 << '\n';
		}
	}
}

