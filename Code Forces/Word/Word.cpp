#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int UpperLetters = 0;
    for (char letter : s) {
        if (!islower(letter)) {
            UpperLetters++;
        }
    }
    if (UpperLetters > s.length() / 2) {
        for (char & letter : s) {
            letter = toupper(letter);
        }
    }
    else {
        for (char & letter : s) {
            letter = tolower(letter);
        }
    }
    cout << s << endl;
}

