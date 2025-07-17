class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left =0;
        int right =0;
        int maxLen =0;
        while(right < s.length()){
            if(!seen.count(s[right])){
                seen.insert(s[right]);
                maxLen = max(maxLen,right-left+1);
                right++;
            }
            else{
                seen.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};