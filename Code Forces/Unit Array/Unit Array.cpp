#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int moves = 0;
		if (mp[1] >= mp[-1]) {
			if (mp[-1] % 2 == 0)
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		}
		else {
			while (mp[-1] > mp[1]) {
				mp[-1]--;
				mp[1]++;
				moves++;
			}
			if (mp[-1] % 2 == 0)
				cout << moves << '\n';
			else
				cout << moves + 1 << '\n';
		}
	}

}