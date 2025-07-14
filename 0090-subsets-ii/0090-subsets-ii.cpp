class Solution {
public:

    void backtracking(int start, vector<int>& nums,vector<int>& current, vector<vector<int>>& result){
        result.push_back(current);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;

            current.push_back(nums[i]);
            backtracking(i+1, nums, current, result);
            current.pop_back();
        }
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> current;
        sort(nums.begin(),nums.end());
        backtracking(0,nums,current,answer);
        return answer;
    }
};