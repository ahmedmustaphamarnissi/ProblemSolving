#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (auto& i : a) cin >> i;

		map<long long, long long > mp;
		if (a.size() == 2)
			cout << "Yes\n";
		else {
			for (int i = 0; i < n; i++) {
				mp[a[i]]++;
			}
			if (mp.size() == 1) {
				cout << "Yes\n";
				continue;
			}
			if (mp.size() > 2) {
				cout << "No\n";
				continue;
			}
			else {
				vector<long long> v;
				for (auto it : mp) {
					v.push_back(it.second);
				}
				if ((v[0] == v[1]) || (v[0] - 1 == v[1]) || (v[0] + 1 == v[1]))
					cout << "Yes\n";
				else
					cout << "No\n";

			}
		}



	}
}
