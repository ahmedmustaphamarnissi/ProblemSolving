#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    bool IsDistinct = false;

    while (!IsDistinct) {
        n++;
        string str = to_string(n);
        sort(str.begin(), str.end());
        for (int i = 0; i < str.size()-1; i++) {
            if (str[i] == str[i + 1])break;
            if ((str[i] != str[i + 1]) && (i == str.size() - 2)) IsDistinct = true;
        }
    }
    if (IsDistinct) cout << n;
}
