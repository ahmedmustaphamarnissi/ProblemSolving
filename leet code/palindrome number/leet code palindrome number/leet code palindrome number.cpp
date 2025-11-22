#include<iostream>

using namespace std;

class Solution {
public:
   static bool isPalindrome(int x) {
        
        if (x < 0)
            return false;
        int Old = x;
        long int New = 0;
        int Num;
        while (x > 0) {
            Num = x % 10;
            New = New * 10+Num;
            x /= 10;
        }
        return (New == Old);
    }
};

int main() {
    cout << Solution::isPalindrome(121);
}
