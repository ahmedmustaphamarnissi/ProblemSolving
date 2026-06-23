#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int>a(n);
		for (auto& i : a)
			cin >> i;
		if (find(a.begin(), a.end(), k) != a.end())
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
