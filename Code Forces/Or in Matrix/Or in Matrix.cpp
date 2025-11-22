
#include <iostream>
using namespace std;

int main()
{
    int A[100][100];
    int B[100][100];
    int m, n;
    cin >> m >> n;

    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = 1;

    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
            if (B[i][j] == 0) {
                for (int x = 0; x < n; x++)
                    A[i][x] = 0;
                for (int x = 0; x < m; x++)
                    A[x][j] = 0;
            }
        }

    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            int flag = 0;
            for (int x = 0; x < n; x++)
                if (A[i][x]) flag = 1;
            for (int x = 0; x < m; x++)
                if (A[x][j]) flag = 1;

            if (B[i][j] == 1 && flag == 0) {
                cout << "NO\n";
                return 0;
            }
            if (B[i][j] == 0 && flag == 1) {
                cout << "NO\n";
                return 0;
            }
        }

    cout << "YES\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

