
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int jump(vector<int>& nums) {
		int CurrentTicket = 0;
		int BestTicket = 0;
		int cost = 0;

		for (int i = 0; i < nums.size() - 1; i++) {
			BestTicket = max(BestTicket, nums[i] + i);
			if (i == CurrentTicket) {
				CurrentTicket = BestTicket;
				cost++;
			}
		}
		return cost;

	}
};

int main()
{
	auto cls = new Solution();
	vector<int> nums({ 2,3,1,1,4 });
	cout << cls->jump(nums);
}
