class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = haystack.find(needle);
        if (k == std::string::npos)
            return -1;

        return k;
    }
};
