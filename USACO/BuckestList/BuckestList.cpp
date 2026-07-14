#include <bits/stdc++.h>
using namespace std;

int main() {


	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	int N;
	cin >> N;

	vector<array<int, 3>> a(N);

	for (int i = 0; i < N; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		a[i] = array<int, 3>{ x, y, z };
	}

	vector<int> ansers(1000, 0);

	for (auto it : a) {
		for (int i = it[0] - 1; i < it[1]; i++) {
			ansers[i] += it[2];
		}
	}

	int m = 0;
	for (int i = 0; i < 1000; i++) {
		m = max(m, ansers[i]);
	}

	cout << m;

	return 0;
}