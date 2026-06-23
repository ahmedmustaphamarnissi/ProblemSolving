#include <iostream>
#include<set>
#include <vector>
using namespace std;

int main()
{
    short n; cin >> n;
    set<short> st;
    vector<short>v;

    short p; cin >> p;
    while (p--) {
        short num; cin >> num;
        st.insert(num);
    }
    short q; cin >> q;
    while (q--) {
        short num; cin >> num;
        st.insert(num);
    }
    for (short it : st)
        v.push_back(it);

    if (v.size() != n) {
        cout << "Oh, my keyboard!";
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (v[i-1] != i) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
