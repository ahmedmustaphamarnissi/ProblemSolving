#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

	int N, M;
	cin >> N >> M;

	vector<int> limit(100);
	vector<int> speed(100);

	int pos = 0;
	for (int i = 0; i < N; i++) {
		int len, sp;
		cin >> len >> sp;

		for (int j = 0; j < len; j++)
			limit[pos++] = sp;
	}

	pos = 0;
	for (int i = 0; i < M; i++) {
		int len, sp;
		cin >> len >> sp;

		for (int j = 0; j < len; j++)
			speed[pos++] = sp;
	}

	int ans = 0;
	for (int i = 0; i < 100; i++) {
		ans = max(ans, speed[i] - limit[i]);
	}

	cout << ans << '\n';

	return 0;
}