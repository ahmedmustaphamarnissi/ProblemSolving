#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--) {
		int n, k, x; cin >> n >> k >> x;
		if (x != 1) {
			cout << "YES" << "\n";
			cout << n << "\n";
			while (n--) {
				cout << "1 ";
			}
			cout << "\n";
		}
		else {
			if (n % 2 == 0 && k >= 2) {
				cout << "YES\n";

				int num = n / 2;
				cout << num << "\n";
				while (num--) {
					cout << "2 ";
				}
				cout << "\n";
			}
			else if (k >= 3) {
				cout << "YES\n";
				int num = floor(n / 2);
				cout << num << "\n";
				num -= 1;
				cout << 3 << " ";
				while (num--) {
					cout << "2 ";
				}
				cout << "\n";
			}
			else {
				cout << "NO\n";
			}

		}


	}
}

