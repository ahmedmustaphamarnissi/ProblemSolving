#include <iostream>

using namespace std;

int main()
{
	short n; cin >> n;
	string s; cin >> s;
	short count = 0;
		for (short i = 0; i < n - 1; i++) {
			if (s[i] == s[i + 1]) {
				count++;
			}
	    }
		cout << count;
}

