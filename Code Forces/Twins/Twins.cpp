#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    map<int, int, greater<int>>mp;

    while (n--) {
        int num; cin >> num;
        if (mp[num] == 0)mp[num] = 1;
        else mp[num] ++;
        sum += num;
    }
    
    int Coins = 0;
    int Money = 0;
    bool IsGreater = false;
    for (auto it : mp) {
        for (int i = 1; i <= it.second;i++) {
            Money += it.first;
            Coins++;
            if (Money > sum / 2) {
                IsGreater = true;
                break;
            }
        }
        if (IsGreater)
            break;
    }

    cout << Coins;
}
