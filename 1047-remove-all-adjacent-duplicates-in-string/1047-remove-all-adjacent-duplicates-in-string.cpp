class Solution {
public:
    string removeDuplicates(string s) {
        string str="";

        for(char ch : s){
            if(str.empty()|| str.back()!=ch){
                str.push_back(ch);
            }
            else{
                str.pop_back();
            }
        }
        return str;
    }
};