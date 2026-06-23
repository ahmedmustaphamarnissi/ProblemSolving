#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    string strNumber = to_string(n);
    int LuckyNumbers = 0;
    for (int i = 0; i < strNumber.length(); i++) {
        if (strNumber[i] == '4' || strNumber[i] == '7') LuckyNumbers++;
    }


    if (LuckyNumbers == 7 || LuckyNumbers == 4)
        cout << "YES";
    else
        cout << "NO";
}