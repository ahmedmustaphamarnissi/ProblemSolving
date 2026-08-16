#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (auto& it : a)
			cin >> it;
		int sum = 0;
		int div = -1;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == div)
				count++;

			if (i == n - 1 || a[i] % 2 != div) {
				div = a[i] % 2;
				sum += count;
				count = 0;
			}
		}
		cout << sum << endl;
	}
}
