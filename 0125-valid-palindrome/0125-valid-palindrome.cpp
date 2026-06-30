class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
            
        }
        int end=str.size()-1;
        while(start<end){
            if(str[start++]!=str[end--]){
                return false;
            }
        }
        return true;
    }
};