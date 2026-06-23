#include <iostream>
#include<map>
using namespace std;

int main()
{
    
    short n; cin >> n;
    int count = 1;
    map<int, int>mp;

    while (n--) {
        int num; cin >> num;
        mp[num] = count;
        count++;
    }
    for (auto num : mp) {
        cout << num.second<<" ";
    }
}
