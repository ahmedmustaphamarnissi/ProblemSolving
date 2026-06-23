#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int dCount = count(s.begin(), s.end(), 'D'); 
    int aCount = n - dCount;

    if (aCount > dCount) cout << "Anton";
    else if (dCount > aCount) cout << "Danik";
    else cout << "Friendship";
}
