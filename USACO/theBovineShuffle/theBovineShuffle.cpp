#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	int N; cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		v[i] = num - 1;
	}

	vector<long long> a(N);
	for (int i = 0; i < N; i++) {
		long long num; cin >> num;
		a[i] = num;
	}
	vector<long long> anser(N);
	for (int i = 0; i < N; i++) {
		int counter = 0;
		int index = v[i];
		while (counter != 2) {
			index = v[index];
			counter++;
		}
		anser[i] = a[index];
	}

	for (auto it : anser)
		cout << it << "\n";
	return 0;
}