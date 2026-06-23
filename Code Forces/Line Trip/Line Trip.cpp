#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		vector<int> a(n + 1);
		for (int i = 0; i <= n; i++) {
			if (i == 0)
				a[i] = 0;
			else
				cin >> a[i];
		}

		int diff = 0;
		for (int i = 0; i < n; i++) {
			diff = max(diff, (a[i + 1] - a[i]));
		}
		diff = max(diff, (x - a[n]) * 2);
		cout << diff << endl;
	}
}
