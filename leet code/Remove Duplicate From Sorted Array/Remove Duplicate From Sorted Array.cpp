class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set <int > st;
        for (int it : nums) {
            st.insert(it);
        }
        nums.clear();
        for (int it : st) {
            nums.push_back(it);
        }
        return  st.size();
    }
};