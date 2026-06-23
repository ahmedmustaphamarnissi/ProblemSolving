#include <bits/stdc++.h>
using namespace std;

int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

int main() {

    int p12 = ask(1, 2);
    int p23 = ask(2, 3);
    int p34 = ask(3, 4);
    int p45 = ask(4, 5);

    vector<int> v = { 4,8,15,16,23,42 };

    do {
        if (v[0] * v[1] == p12 &&
            v[1] * v[2] == p23 &&
            v[2] * v[3] == p34 &&
            v[3] * v[4] == p45) {

            cout << "! ";
            for (int x : v) cout << x << " ";
            cout << endl;
            cout.flush();
            return 0;
        }

    } while (next_permutation(v.begin(), v.end()));
}