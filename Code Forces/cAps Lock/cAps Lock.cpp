#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;

	bool AreMajus = true;
	bool IsFirst = isupper(s[0]);

	for (int i = 1; i < s.size(); i++) {
		if (isupper(s[i]) == false) {
			AreMajus = false;
			break;
		}
	}
	if ((AreMajus && IsFirst) || (AreMajus && !IsFirst)) {
		for (int i = 0; i < s.size(); i++) {
			if (isupper(s[i]))
				s[i] = tolower(s[i]);
			else
				s[i] = toupper(s[i]);
		}
	}
	cout << s;

}