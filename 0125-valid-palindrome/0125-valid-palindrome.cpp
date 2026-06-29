class Solution {
public:
    bool isPalindrome(string s) {
       string str="";
       for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            str+=tolower(s[i]);
        }
    
       }

    //    string rev=str;
    //    reverse(str.begin(), str.end());

    //    return str==rev;
       int start=0;
       
       int end = str.size()-1;
       while(start<end){
        if(str[start]==str[end]){
            start++;
            end--;
            
        }
        else{
            return false;
        }
       }
       return true;
    }
};