#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Isdivide(int n) {
    int temp = n;
    vector<int> Numbers;

    while (--temp) {          
        bool IsLucky = true;
        string strNum = to_string(temp);

        for (char ch : strNum) {
            if (ch != '7' && ch != '4') {
                IsLucky = false;   
                break;
            }
        }

        if (IsLucky)
            Numbers.push_back(temp);
    }

    for (int item : Numbers) {
        if (item != 0 && n % item == 0) 
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    bool IsLucky = true;
    string strNum = to_string(n);

    for (char ch : strNum) {
        if (ch != '7' && ch != '4') {
            IsLucky = false;
            break;
        }
    }

    if (IsLucky || Isdivide(n))
        cout << "YES";
    else
        cout << "NO";
}
