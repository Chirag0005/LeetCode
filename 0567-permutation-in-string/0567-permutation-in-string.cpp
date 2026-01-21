class Solution {
public:
    bool checkInclusion(string s1, string s2)
     {
        int n1= s1.length();
        int n2= s2.length();
        if(n1>n2) return false;
        int freq1[26]={0};
        int freq2[26]={0};

        for(int i=0;i<n1;i++)
        {
            char ch=s1[i];
            int number = ch-'a';
            freq1[number]++;
        }

        for(int i=0;i<n1;i++)
        {
            char ch = s2[i];
            int number = ch-'a';
            freq2[number]++;
        }

        if(equal(freq1,freq1+26,freq2)) return true;

        for(int i=n1;i<n2;i++){
            freq2[s2[i]-'a']++;
            freq2[s2[i-n1]-'a']--;
            if(equal(freq1,freq1+26,freq2)) return true;
   
        }
        return false;
    }
};