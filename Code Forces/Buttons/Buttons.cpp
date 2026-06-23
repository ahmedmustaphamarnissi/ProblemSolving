#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		long long a, b, c;
		cin >> a >> b >> c;
		if (a > b)
			cout << "First\n";
		else if (a == b && c % 2 != 0)
			cout << "First\n";
		else
			cout << "Second\n";

	}
}
