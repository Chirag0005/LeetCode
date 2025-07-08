class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                st+= tolower(s[i]);
            }
        }
        
        string revers = st;
        reverse(st.begin(),st.end());
        return revers == st;
    }
};