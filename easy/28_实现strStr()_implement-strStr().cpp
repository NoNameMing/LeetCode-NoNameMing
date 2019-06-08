class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        int pos = haystack.find(needle);
        if (pos == -1) return -1;
        return pos;
    }
};