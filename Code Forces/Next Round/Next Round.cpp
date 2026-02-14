#include <iostream>
#include<vector>
using namespace std;

int main()
{
    short n, k; cin >> n >> k;
	vector<short> scores(n);
    
    short kScore = 0;
    for (int i = 0; i < n; i++) {
		short score; cin >> score;
        scores[i] = score;
        if (i == k - 1) {
			kScore = score;
        }
    }
    short counter = 0;
    for (int j = 0; j < n; j++) {
        if (scores[j] >= kScore && scores[j] > 0) {
            counter++;
        }
        else
            break;
    }
    cout << counter;
}
