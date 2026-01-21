class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256]={0};
        int start = 0;
        int maxLen=0;

        for(int end = 0;end<s.length();end++){
            freq[s[end]]++;

            while(freq[s[end]]>1){
                freq[s[start]]--;
                start++;
            }
            maxLen = max(maxLen,end-start+1);
        }
    return maxLen;
    }
};