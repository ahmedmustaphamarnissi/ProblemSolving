#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long int n, m, a;
    cin >> n >> m >> a;
    long long int numbers = ceil((double)n / a) * ceil((double)m / a);
    cout << numbers << endl;
}
