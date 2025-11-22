
class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        for (char& c : s) {
            if (!v.empty() && (
                (c == ')' && v.back() == '(') ||
                (c == '}' && v.back() == '{') ||
                (c == ']' && v.back() == '[')
                )) v.pop_back();
            else v.push_back(c);
        }
        return v.empty();
    }
};