
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool canJump(vector<int>& nums) {
		int mxd = nums[0];
		for (int i = 0; i < nums.size(); i++) {
			if (mxd < i)
				return false;
			mxd = max(mxd, nums[i] + i);
		}
		return true;

	}
};

int main()
{
}
