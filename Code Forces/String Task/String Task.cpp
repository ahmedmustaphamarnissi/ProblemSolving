#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s; cin >> s;
	set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'y' };
	string  newstring= "";
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
		if (vowels.find(s[i]) == vowels.end()) {
			newstring += '.';
			newstring += s[i];
		}
	}
	cout << newstring;
}
