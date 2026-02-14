#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    bool IsHard = false;

    while (n--) {
        bool anser; cin >> anser;
        if (anser) IsHard = true;
    }
    if (IsHard) cout << "HARD";
    else cout << "EASY";
}
