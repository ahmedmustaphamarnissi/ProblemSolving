#include <iostream>

using namespace std;

int main()
{
    short n; cin >> n;
    short temp = n;
    double sum=0;

    while (temp--) {
        short percent; cin >> percent;
        sum += percent;
    }
    if (sum != 0) cout << sum / n;
    else cout << 0;
}
