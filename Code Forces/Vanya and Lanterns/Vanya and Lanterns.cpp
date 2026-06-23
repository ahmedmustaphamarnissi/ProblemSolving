#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	short n; long long l;
	cin >> n >> l;
	vector<long long> v;
	while (n--) {
		long long a; cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	long double m = v[v.size() - 1];
	long long ans = 0;
	for (int i = 0; i < (int)v.size() - 1; i++) {
		ans = max(ans, v[i + 1] - v[i]);
	}
	long double ans2 = (long double)ans / 2;
	ans2 = max(ans2, (long double)v[0]);
	ans2 = max(ans2, (long double)l - m);
	cout << fixed << setprecision(7) << ans2;
}