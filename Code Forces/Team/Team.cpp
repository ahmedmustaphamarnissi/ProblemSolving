#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<bool>> team;
    int n; cin >> n;
    int totalsolved = 0;
    while (n--) {
        int numsolve = 0;
        for (int i = 0; i < 3; i++) {
            bool solved; cin >> solved;
            if (solved) numsolve++;
        }
        if (numsolve >= 2)totalsolved++;
    }
    cout << totalsolved;
    
}
