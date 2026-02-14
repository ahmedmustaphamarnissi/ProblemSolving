#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t; cin >> t;
    vector<long long>v;
    while (t--) {
        long long n; cin >> n;
        v.push_back((n * (n * n - 1) )/ 8);
    }
    for (auto it : v) 
        cout << it << endl;
}