#include <iostream>

using namespace std;

int main()
{
    int n, h; cin >> n >> h;
    int sum = 0;
    while (n--) {
        int num=0;  cin >> num;
        if (num > h) sum += 2;
        else sum++;
    }
    cout << sum;
}

