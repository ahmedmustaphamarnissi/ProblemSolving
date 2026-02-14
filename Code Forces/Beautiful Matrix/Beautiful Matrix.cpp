#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    bool Arr[5][5];
    short moves = 0;
    short OneI, OneJ;
    bool found = false;
    for (short i = 0; i < 5; i++) {
        for (short j = 0; j < 5; j++) {
            cin >> Arr[i][j];
            if (Arr[i][j] && found==false) {
                OneI = i + 1;
                OneJ = j + 1;
                moves = abs(3 - OneI) + abs(3 - OneJ);
                found = true;
            }
        }
    }
    cout << moves;

}