#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string ans;
    for (int i = 0; i < s1.length(); i++) {
        ans += to_string((s1[i] - '0') ^ (s2[i] - '0'));
    }
    cout << ans; 
}
