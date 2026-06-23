#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (auto& i : a)
			cin >> i;

		map<string, int> mp;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0)
				mp["even"]++;
			else
				mp["odd"]++;
		}
		if (mp["odd"] % 2 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

