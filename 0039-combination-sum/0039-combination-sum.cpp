class Solution {
public:

    void backtrack(int index, vector<int>& candi,int tar,vector<vector<int>>& ans,vector<int>& curr){
        if(tar==0){
            ans.push_back(curr);
            return;
        }
        if(index == candi.size() || tar<0){
            return ;
        }
        curr.push_back(candi[index]);
        backtrack(index,candi,tar-candi[index],ans,curr);
        curr.pop_back();
        backtrack(index+1,candi,tar,ans,curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candi, int tar) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(0,candi,tar,ans,curr);
        return ans;
    }
};