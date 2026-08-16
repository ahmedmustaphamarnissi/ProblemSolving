#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>a(n);
		for (auto& it : a)
			cin >> it;

		int maxVal = 0;
		int it = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				it++;
				maxVal = max(maxVal, it);
			}
			else
				it = 0;

		}
		cout << maxVal << '\n';
	}
}
