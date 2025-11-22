#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n; cin >> n;
    map<string, int> mp;
    while (n--) {
        string word; cin >> word;
        if (mp.find(word) != mp.end()) {
            int num = mp[word];
            cout << word << num << endl;
            mp[word]++;
        }
        else {
            cout << "OK" << endl;
            mp[word] = 1;
        }
    }
    return 0;

}

