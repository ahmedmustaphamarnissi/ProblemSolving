#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    map <string, int > mp;
    vector <pair<string, int>> vect;
    string name;
    int score,max;


    int n; cin >> n;
    for(int i = 0 ; i<n ;i++) {
        cin >> name >> score;
        if (mp.find(name) != mp.end()) 
            mp[name] += score;
        else
           mp.insert({ name,score });

        vect.push_back(make_pair(name, mp[name]));
    }
    max = INT_MIN;
    for (auto it : mp) {
        max = max > it.second ? max : it.second;
    }

    for (int i = 0; i < n; i++) {
        if (mp[vect[i].first] == max && vect[i].second >= max) {
            cout << vect[i].first;
            return 0;
        }
    }
}

