#include <iostream>

using namespace std;

int main()
{
	int k, w; 
	long n;
	cin >> k >>n>> w;
	long totalcost = k * ((w * (w + 1))/2);
	if (n >= totalcost ) cout << 0;
	else cout << totalcost - n;
}

