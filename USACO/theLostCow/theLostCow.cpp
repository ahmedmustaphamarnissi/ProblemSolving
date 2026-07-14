#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);

	int x, y;
	cin >> x >> y;

	int pos = x;
	int steps = 0;
	int diff = 1;

	while (true) {
		int target = x + diff;

		if ((pos <= y && y <= target) || (target <= y && y <= pos)) {
			steps += abs(y - pos);
			break;
		}

		steps += abs(target - pos);
		pos = target;
		diff *= -2;
	}

	cout << steps;
	return 0;
}