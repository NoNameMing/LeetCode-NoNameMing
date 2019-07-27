class Solution {
    public int firstUniqChar(String s) {
        int[] hashCode = new int[26];
        for (int i = 0; i < s.length(); i++) hashCode[s.charAt(i) - 'a']++;
        // for (char c : s.toCharArray()) hashCode[c - 'a']++;
        for (int i = 0; i < s.length(); i++) if (hashCode[s.charAt(i) - 'a'] == 1) return i;
        return -1;
    }
}