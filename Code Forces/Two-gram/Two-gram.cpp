#include <iostream>
#include<map>
using namespace std;

int main()
{
    short n; cin >> n;
    string s; cin >> s;
    map<string, short>mp;
    for (int i = 0; i < s.length() - 1; i++) {
        string two = "";
        two += s[i];
        two += s[i + 1];
        mp[two]++;
    }
    short max=0;
    string str;
    for (auto it : mp) {
        if (it.second > max) {
            max = it.second;
            str = it.first;
        }
    }
    cout << str;
}
