// Watermelon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    short W;
    cin >> W;

    if (W > 2 && W % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

