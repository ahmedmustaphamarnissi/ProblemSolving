#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long sum = 0;
		for (int i = 0; i < n - 1; i++) {
			int num; cin >> num;
			sum += num;
		}
		sum *= -1;
		cout << sum << endl;
	}
}
