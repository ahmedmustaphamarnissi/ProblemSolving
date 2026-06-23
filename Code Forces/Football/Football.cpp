#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int count = 0;
    bool IsDangerous = false;
    char current = s[0];
    for (char ch : s) {
        if (current == ch) count++;
        else {
            current = ch;
            count = 1;
        }
        if (count == 7) {
            IsDangerous = true;
            break;
        }
    }
    if (IsDangerous) cout << "YES";
    else cout << "NO";
}
