#include <iostream>
#include <vector>

using namespace std;

int main()
{
    short n; cin >> n;
    short temp = n;
    vector<short> v;
    short max = 1, min = 100;
    short posmax = 0, posmin = 0;
    short count = 0;

    while (temp--) {
        short num; cin >> num;
        v.push_back(num);

        if (max < num) {
            max = num;
            posmax = count;
        }
        if (min >= num) {
            min = num;
            posmin = count;
        }
        count++;
    }

    short result = posmax + (n - 1 - posmin);
    if (posmax > posmin) result--;

    cout << result;
}
