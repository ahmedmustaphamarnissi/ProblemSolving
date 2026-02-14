#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long res = 0;
    int notes[] = { 100, 20, 10, 5, 1 };

    for (int v : notes) {
        res += n / v;
        n %= v;
    }

    cout << res;
}
