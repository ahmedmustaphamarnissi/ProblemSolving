#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (auto& it : a)
			cin >> it;

		int TwoCount = 0;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == 2)
				TwoCount++;
		}
		if (TwoCount % 2 == 1)
			cout << -1 << endl;

		else {
			if (TwoCount == 0)
				cout << 1 << endl;
			else {
				int count = 0;
				int k = -1;
				for (int i = 0; i < a.size() - 1; i++) {
					if (a[i] == 2)
						count++;
					if (count == (TwoCount / 2)) {
						k = i + 1;
						break;
					}
				}
				cout << k << endl;
			}
		}
	}

}

