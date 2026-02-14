#include <iostream>
#include <set>
using namespace std;
int main()
{
    int count = 0;
    short counter = 4;
    set<long long > st;
    while (counter--) {
        long long shoose; cin >> shoose;
        if (st.find(shoose) == st.end()) {
            count++;
            st.insert(shoose);
        }
    }
    cout << 4 - st.size();
}