#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (long long i = 3; i * i <= n; i += 2)
		if (n % i == 0) return false;
	return true;
}

bool isTPrime(long long x) {
	long long root = (long long)sqrt((double)x);
	while (root * root > x) root--;
	while ((root + 1) * (root + 1) <= x) root++;

	if (root * root != x) return false;
	return isPrime(root);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	while (n--) {
		long long x; cin >> x;
		cout << (isTPrime(x) ? "YES" : "NO") << "\n";
	}
}