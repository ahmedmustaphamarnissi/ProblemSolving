class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count = (nums.size() - 1) / 2;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            count = left + (right - left) / 2;
            int mid = nums[count];

            if (mid == target)
                return count;
            else if (mid < target)
                left = count + 1;
            else
                right = count - 1;
        }

        return left;

    }
};