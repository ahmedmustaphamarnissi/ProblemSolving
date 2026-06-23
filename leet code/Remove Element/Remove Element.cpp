class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        multiset <int> mst;
        for (int it : nums) {
            mst.insert(it);
        }
        mst.erase(val);
        nums.clear();
        for (int it : mst) {
            nums.push_back(it);
        }
        return nums.size();
    }
};
