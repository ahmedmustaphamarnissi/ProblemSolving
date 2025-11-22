#include <iostream>
#include <algorithm>
#include<set>
#include<vector>

using namespace std;

int main()
{
    vector <pair<int, int>> segments;
    set< vector < pair<int, int>>> st;

    int t, n; cin >> t;
    int x = 0, y = 0;

    for (int i = 0; i < t; i++) {
        st.clear();
        string s; cin >> s;
        n = s.size();
        int res = 0;
        for (int j = 0; j < n; j++) {
            int dx = x, dy = y;
            (s[j] == 'N') ? dy++ : (s[j] == 'S') ? dy-- : (s[j] == 'E') ? dx++ : dx--;

            segments.clear();
            segments.push_back(make_pair(x, y));
            segments.push_back(make_pair(dx, dy));

            sort(segments.begin(), segments.end());
            if (st.find(segments) != st.end())  res++;
            else {
                st.insert(segments);
                res += 5;
            }
            x = dx;
            y = dy;
        }
        cout << res << endl;
    }
}

