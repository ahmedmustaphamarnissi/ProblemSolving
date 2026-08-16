#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		map<int, int> freq;
		vector<int> a;
		for (int i = 0; i < nums.size(); i++) {
			if (freq[nums[i]] != 2) {
				freq[nums[i]]++;
				a.push_back(nums[i]);
			}
		}
		nums = a;
		return nums.size();
	}

};

int main()
{
}

