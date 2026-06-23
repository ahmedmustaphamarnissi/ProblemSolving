class Solution {
public:
    int reverse(int x) {
        long long b = 0;

        while (x != 0) {
            b = b * 10 + x % 10;
            x /= 10;
        }

        // Check 32-bit signed integer bounds
        if (b < INT_MIN || b > INT_MAX) {
            return 0;
        }

        return (int)b;
    }
};