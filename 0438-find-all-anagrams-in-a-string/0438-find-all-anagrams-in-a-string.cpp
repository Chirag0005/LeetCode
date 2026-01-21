class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1= s.length();
        int n2 = p.length();
        vector<int> result;
        int freq1[26]={0};
        int freq2[26]={0};
        if(n2 > n1) return {};
        for(int i=0;i<n2;i++){
            freq2[p[i]-'a']++;
        }

        for(int i=0;i<n2;i++){
            freq1[s[i]-'a']++;
        }
        if(equal(freq2,freq2+26,freq1)) result.push_back(0);

        for(int i=n2;i<n1;i++){
            freq1[s[i]-'a']++;
            freq1[s[i-n2]-'a']--;

            if(equal(freq2,freq2+26,freq1)) result.push_back(i-n2+1);

        }
        return result;
    }
};