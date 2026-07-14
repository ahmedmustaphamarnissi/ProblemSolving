#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	long long a, am, b, bm, c, cm;
	cin >> am >> a;
	cin >> bm >> b;
	cin >> cm >> c;

	int n = 100, counter = 1;
	while (n--) {
		if (counter == 1) {
			if (a >= (bm - b)) {
				a -= (bm - b);
				b = b + (bm - b);
			}
			else {
				b += a;
				a = 0;
			}
		}
		else if (counter == 2) {
			if (b >= (cm - c)) {
				b -= (cm - c);
				c = c + (cm - c);
			}
			else {
				c += b;
				b = 0;
			}
		}
		else {
			if (c >= (am - a)) {
				c -= (am - a);
				a = a + (am - a);
			}
			else {
				a += c;
				c = 0;
			}
			counter = 1;
			continue;
		}
		counter++;
	}
	cout << a << '\n' << b << '\n' << c;
}