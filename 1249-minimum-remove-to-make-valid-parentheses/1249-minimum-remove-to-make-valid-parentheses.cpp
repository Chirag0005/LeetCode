class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp ="";
        int open =0;
        for(char ch: s){
            if(ch =='('){
                open++;
                temp+=ch;
            }
            else if(ch ==')'){
                if(open>0){
                    open--;
                    temp+=ch;
                }
            }
            else{
                temp+=ch;
            }
        }

        string result="";
        int close=0;

        for(int i= temp.size()-1;i>=0;i--){
            if(temp[i]==')'){
                close++;
                result+=temp[i];
            }
            else if(temp[i]=='(' && close>0){
                close--;
                result+=temp[i];
            }
            else if(isalpha(temp[i])){
                result+=temp[i];
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};