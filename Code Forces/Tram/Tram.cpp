#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int minPassengers=0;
    int reimeinder = 0;
    while (n--) {
        int exit, enter; cin >> exit >> enter;
        reimeinder = reimeinder + enter - exit;
        if (reimeinder > minPassengers)minPassengers = reimeinder;
    }
    cout << minPassengers;
}
