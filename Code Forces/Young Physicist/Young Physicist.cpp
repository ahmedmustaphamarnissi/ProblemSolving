#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum1 = 0, sum2 = 0, sum3 = 0;

    while (n--) {
        int num1 = 0, num2 = 0, num3 = 0;
        cin >> num1 >> num2 >> num3;
        sum1 += num1;
        sum2 += num2;
        sum3 += num3;
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES";
    else
        cout << "NO";
}