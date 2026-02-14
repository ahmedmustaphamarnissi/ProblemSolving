#include <iostream>

using namespace std;

int main()
{
    short n; cin >> n;
    string res = "";

    short count = 0;
    while (count != n) {
        count++;
        if (count % 2 == 0) res += "I love ";
        else res += "I hate ";
        if (count == n)res += "it";
        else res += "that ";
    }
    cout << res;
}
