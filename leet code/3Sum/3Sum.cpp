#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {

		sort(nums.begin(), nums.end());

		set<vector<int>> st;
		int n = nums.size();

		for (int i = 0; i < n; i++) {
			int j = i + 1;
			int k = n - 1;

			while (j < k) {
				int sum = nums[i] + nums[j] + nums[k];

				if (sum <= 0) {
					if (sum == 0)
						st.insert({ nums[i], nums[j], nums[k] });
					j++;
				}
				else {
					k--;
				}
			}
		}

		return vector<vector<int>>(st.begin(), st.end());
	}
};

int main()
{

}
