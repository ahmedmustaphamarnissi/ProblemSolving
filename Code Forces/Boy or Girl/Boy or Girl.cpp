#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <char> st;
    string s; cin >> s;
    st.insert(s.begin(),s.end());
    if (st.size() % 2 == 1)cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    
    
}

