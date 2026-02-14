#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, t; cin >> n >> t;
	string s; cin >> s;
	
	while (t--) {
		bool IsChanged = false;
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == 'B' && s[i + 1] == 'G' && !IsChanged) {
				s[i] = 'G';
				s[i + 1] = 'B';
				IsChanged = true;
			}
			else {
				IsChanged = false;
			}

		}
	}
	cout << s;

}
