class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string ans = strs[0];
        for (auto str : strs) {
             if (str.empty()) return "";
             int len = ans.length();
             for (int i = 0; i < len; i++) {
                  if (ans[i] == str[i]) continue;
                  else {ans.erase(i); break;}
             }    
        }
        return ans;
    }
};