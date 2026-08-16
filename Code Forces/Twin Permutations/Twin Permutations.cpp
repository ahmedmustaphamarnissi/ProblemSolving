#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (auto& it : a) cin >> it;
		int sum = 0;
		for (auto it : a) sum += it;
		int num = (sum * 2) / n;

		for (auto it : a) {
			cout << num - it << " ";
		}
		cout << endl;
	}

}