#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		string s; cin >> s;

		int count = 0;
		int m = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] == '.') {
				count++;
			}

			if (s[i] == '#' || i == n - 1) {
				if (count >= 3) {
					m = 2;
					break;
				}

				m += count;
				count = 0;
			}
		}

		cout << m << endl;
	}

	return 0;
}