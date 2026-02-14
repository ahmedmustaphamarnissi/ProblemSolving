#include <iostream>

using namespace std;

int main()
{
    string p; cin >> p;
    bool IsTrue=false;
    for (char it : p) {
        if (it == 'H' || it == 'Q' || it == '9') {
            IsTrue = true;
            break;
        }
    }
    if (IsTrue) cout << "YES";
    else cout << "NO";
}
