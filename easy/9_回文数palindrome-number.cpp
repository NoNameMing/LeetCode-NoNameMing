class Solution {
public:
    bool isPalindrome(int x) {
        long temp = x, judge = 0;
        if (x < 0) return false;
        if (x > 0 && x % 10 == 0) return false;
        else {
            while (temp != 0)
            {
                int r = temp % 10;
                judge = judge * 10 + r;
                temp /= 10;
            }
        }
        if (judge == x) return true; 
        else return false;
    }
};