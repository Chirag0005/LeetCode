class Solution {
public:
    bool isPalin(string& s,int start,int end){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    void backtrack(int start, string& s, vector<string>& curr, vector<vector<string>>& ans){
        if(start == s.length()){
            ans.push_back(curr);
            return;
        }

        for(int end=start; end < s.length(); end++){
            if(isPalin(s,start,end)){
                curr.push_back(s.substr(start,end-start+1));
                backtrack(end+1,s,curr,ans);
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
       vector<vector<string>> ans;
       vector<string>curr;
       backtrack(0,s,curr,ans);
       return ans;
    }
};