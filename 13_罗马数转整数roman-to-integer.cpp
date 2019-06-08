class Solution {
public:
    int romanToInt(string s) {
        int result = 0, arr[256];
        arr['I'] = 1; arr['V'] = 5;
        arr['X'] = 10; arr['L'] = 50;
        arr['C'] = 100; arr['D'] = 500; arr['M'] = 1000;
        for (int i = 0; i < s.length(); i++) {
             if (i == (s.length() - 1) || arr[s[i + 1]] <= arr[s[i]]) result += arr[s[i]];
             else result -= arr[s[i]];
        }
        return result;
    }
};