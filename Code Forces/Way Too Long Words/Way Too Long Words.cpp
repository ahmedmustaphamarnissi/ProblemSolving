#include <iostream>
#include<vector>

using namespace std;

int main()
{
    short n; cin >> n;
    vector<string> strs;
    
    while (n--) {
        string s; cin >> s;
        strs.push_back(s);
    }
    for (int i = 0; i < strs.size(); i++) {
        if (strs[i].length() > 10) {
            int size = strs[i].length();
            char first = strs[i][0];
            char last = strs[i][size - 1];
            cout << first << size - 2 << last << endl;
        }
        else {
            cout << strs[i] << endl;
        }
    }
}
