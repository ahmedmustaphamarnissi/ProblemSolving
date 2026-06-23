#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0; 

    for (int i = 0; i < n; i++) {
        int s; cin >> s;
        if (s == 1) c1++;
        else if (s == 2) c2++;
        else if (s == 3) c3++;
        else c4++;
    }

    int taxis = c4; 

    int pairs = min(c3, c1);
    taxis += pairs;
    c3 -= pairs;
    c1 -= pairs;

    taxis += c3;

    taxis += c2 / 2;
    if (c2 % 2 == 1) { 
        taxis++;
        c1 -= min(c1, 2); 
    }

    taxis += (c1 + 3) / 4; 

    cout << taxis;
}