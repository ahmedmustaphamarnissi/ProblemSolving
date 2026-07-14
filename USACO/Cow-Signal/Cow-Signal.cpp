#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);

	int M, N, K;
	cin >> M >> N >> K;
	vector<string>base(M);
	for (int i = 0; i < M; i++) cin >> base[i];

	vector<string>res(M);
	for (int i = 0; i < M; i++) {
		string anser = "";
		for (int j = 0; j < N; j++) {
			anser.append(K, base[i][j]);
		}
		res[i] = anser;
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cout << res[i] << '\n';
		}
	}
}