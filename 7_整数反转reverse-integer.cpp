class Solution {
public:
    int reverse(int x) {
        long result = 0;
        while (x != 0){
            int a = x % 10;
            result = result * 10 + a;
            x /= 10; 
        }
        return (result > INT_MAX || result < INT_MIN) ? 0 : result;  
        // 结果不能超 不是x
    }
};