class Solution {
public:

    void solve(string digits,string &current,int index, vector<string>& ans, vector<string>& map){

        if(index==digits.length()){
            ans.push_back(current);
            return;
        }

        int number = digits[index]-'0';
        string value = map[number];

        for(int i=0;i<value.length();i++){
            current.push_back(value[i]);    
            solve(digits,current, index+1, ans, map); 
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if(digits.length()==0) return ans;

        vector<string> map = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        string current = "";
        solve(digits,current,0,ans,map);
        return ans;
    }
};