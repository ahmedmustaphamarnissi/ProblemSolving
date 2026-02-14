#include <iostream>

using namespace std;

int main()
{
    short n; cin >> n;
    short count = 0;
    while (n--) {
        short p, q; cin >> p >> q;
        if (q - p >= 2) count++;
    }
    cout << count;
}
