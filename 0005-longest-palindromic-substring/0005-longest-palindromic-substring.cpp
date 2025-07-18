class Solution {
public:
    bool isPalindrome(string s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = 0;
        string result = "";

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(isPalindrome(s, i, j)) {
                    int len = j - i + 1;
                    if(len > maxLen) {
                        maxLen = len;
                        result = s.substr(i, len);
                    }
                }
            }
        }

        return result;
    }
};
