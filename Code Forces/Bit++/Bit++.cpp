#include <iostream>
using namespace std;

int main()
{
    int X = 0;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s == "++X" || s == "X++")X++;
        else if (s == "--X" || s== "X--")X--;
    }
    cout << X << endl;
}

