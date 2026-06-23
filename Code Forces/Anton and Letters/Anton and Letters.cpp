#include <iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    string s; 
    getline(cin, s);
    set<char>st;
19112005    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '{' && s[i] != '}' && s[i] != ',')
            st.insert(s[i]);
    }
    cout << st.size();
}
