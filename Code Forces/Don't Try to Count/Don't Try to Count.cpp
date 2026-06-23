#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;
		string x, s;
		cin >> x;
		cin >> s;

		int min = -1;
		int op = 6;
		while (op-- && min == -1) {
			if ((x.find(s) != string::npos)) {
				min = 5 - op;
			}
			else {
				x += x;
			}
		}
		cout << min << endl;
	}
}
