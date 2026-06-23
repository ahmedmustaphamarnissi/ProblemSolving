#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<tuple<int, int, int>> moves;
	for (int i = 0; i < n; i++) {
		int a, b, g;
		cin >> a >> b >> g;
		moves.emplace_back(a, b, g);
	}

	int answer = 0;

	for (int start = 0; start < 3; start++) {
		vector<bool> pebble(3, false);
		pebble[start] = true;

		int score = 0;

		for (int i = 0; i < n; i++) {
			int a = get<0>(moves[i]);
			int b = get<1>(moves[i]);
			int g = get<2>(moves[i]);

			swap(pebble[a - 1], pebble[b - 1]);

			if (pebble[g - 1])
				score++;
		}

		answer = max(answer, score);
	}

	cout << answer;
}