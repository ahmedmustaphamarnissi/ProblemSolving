#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v;
    while (n--) {
        int num; cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for (int it : v) {
        cout << it << " ";
    }
}
