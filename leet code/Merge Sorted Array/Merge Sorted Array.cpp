#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		nums1.erase(nums1.begin() + m, nums1.end());

		for (int x : nums2)
			nums1.push_back(x);

		sort(nums1.begin(), nums1.end());
	}
};

int main()
{

}
