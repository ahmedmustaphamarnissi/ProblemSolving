#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		bool isSorted = true;
		vector<int> nums(n);
		for (auto& num : nums)
			cin >> num;

		for (int i = 1; i < n; i++) {

			if (nums[i] < nums[i - 1]) {
				isSorted = false;
				break;
			}

		}
		if (k == 1) {
			if (isSorted) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else
			cout << "YES" << endl;
	}
}

