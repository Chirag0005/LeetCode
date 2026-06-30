class Solution {
public:
    int start = 0;
    int maxLength = 0;

    void expand(string &s, int left, int right) {

        while (left >= 0 && right < s.length() && s[left] == s[right]) {

            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }

            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {

        for (int i = 0; i < s.length(); i++) {

            expand(s, i, i);       // Odd length palindrome
            expand(s, i, i + 1);   // Even length palindrome

        }

        return s.substr(start, maxLength);
    }
};