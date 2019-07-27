class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;
        int[] sNum = new int[26];
        int[] tNum = new int[26];
        for (int i = 0; i < s.length(); i++) {
            sNum[s.charAt(i) - 'a']++;
            tNum[t.charAt(i) - 'a']++; 
        }
        for (int i = 0; i < 26; i++) {
            if (sNum[i] != tNum[i]) return false;
        }
        return true;
    }
}