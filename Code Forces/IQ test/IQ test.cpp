#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> vOdd;
    vector<int> vEv;
    for (int i = 1; i <= n; i++) {
        int num; cin >> num;
        if (num % 2 == 0) vEv.push_back(i);
        if (num % 2 == 1) vOdd.push_back(i);
    }
    if (vEv.size() == 1) cout << vEv[0];
    else cout << vOdd[0];
}
