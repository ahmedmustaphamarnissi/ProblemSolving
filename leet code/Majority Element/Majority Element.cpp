
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		//boyer-more algorithm
		int count = 0;
		int num = nums[0];
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == num)
				count++;
			else if (count == 0) {
				count = 1;
				num = nums[i];
			}
			else
				count--;
		}
		return num;
	}
};

int main()
{
}
