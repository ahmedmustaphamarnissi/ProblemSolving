
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long s, n;
	cin >> s >> n;
	vector<pair<long long, long long>> v(n);
	while (n--) {
		long long x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end());
	for (auto it : v) {
		if (s > it.first) {
			s += it.second;
		}
		else {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES";
}