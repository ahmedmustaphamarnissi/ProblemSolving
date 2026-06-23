#include <iostream>

using namespace std;

int main()
{
    long long n, k; cin >> n >> k;
    long long num;
    if (k <= ((n+1) / 2)) num = (k * 2) - 1;
    else   num = ((k - ((n + 1) / 2)) * 2);

    cout << num;

}

