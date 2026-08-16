#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // Number of test cases
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int max = n - 1, min = 0;
		int size = n;
		while (s[max] != s[min] && size > 1) {
			min += 1;
			max -= 1;
			size -= 2;
		}
		cout << size << endl;
	}
	return 0;
}
