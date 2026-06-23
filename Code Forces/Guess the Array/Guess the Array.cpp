#include <bits/stdc++.h>
using namespace std;

long long ask(int i, int j) {
	cout << "? " << i << " " << j << endl;
	cout.flush();
	int x; cin >> x;
	return x;
}

int main() {
	int n; cin >> n;
	long long  x = ask(1, 2), y = ask(1, 3), z = ask(2, 3);
	vector<long long> v(n);
	v[0] = (x + y - z) / 2;
	v[1] = x - v[0];
	v[2] = y - v[0];
	for (int i = 3; i < n; i++) {
		v[i] = ask(1, i + 1) - v[0];
	}
	cout << "! ";
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}


}