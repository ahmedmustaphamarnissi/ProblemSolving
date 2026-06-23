#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    int count = 0;
    int n; cin >> n;

    while (n--) {
        string mag; cin >> mag;
        if (v.empty()) {
            v.push_back(mag);
            count++;
        }
        else if (v[count - 1] != mag) {
            count++;
            v.push_back(mag);
        }   
    }
    cout << count;
}
