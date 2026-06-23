#include <iostream>
#include <map>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    map<long long, long long> mp1, mp2, mp3;

    for (long long i = 0; i < n; i++) {
        long long num;
        cin >> num;
        mp1[num]++;
    }

    for (long long i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        mp2[num]++;
    }

    for (long long i = 0; i < n - 2; i++) {
        long long num;
        cin >> num;
        mp3[num]++;
    }

    for (auto it : mp1) {
        if (mp2[it.first] != it.second) {
            cout << it.first << endl;
            break;
        }
    }

    for (auto it : mp2) {
        if (mp3[it.first] != it.second) {
            cout << it.first << endl;
            break;
        }
    }

    return 0;
}
