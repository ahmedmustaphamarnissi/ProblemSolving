#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<string, short> mp = { {"Tetrahedron",4} , {"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20} };
    long long n; cin >> n;
    long long res = 0;
    while (n--) {
        string s; cin >> s;
        res += mp[s];
    }
    cout << res;
}
