#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
	int hIndex(vector<int>& citations) {
		map<int, int> mp;
		for (auto it : citations) {
			mp[it] = 0;
		}
		for (auto it : citations) {
			for (auto& m : mp) {
				if (it <= m.first)
					mp[m.first]++;
			}
		}

		int max = 0;
		for (auto& m : mp) {
			if (m.first >= m.second && m.first > max)
				max = m.first;
		}
		return max;
	}
};

int main()
{
	Solution cls;
	vector<int> v({ 3, 0, 6, 1, 5 });
	cout << cls.hIndex(v);
}
