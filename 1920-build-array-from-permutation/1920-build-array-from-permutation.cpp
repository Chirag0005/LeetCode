class Solution {
public:
    void solve(int i, vector<int>& nums, vector<int>& ans) {
        if(i == nums.size())
            return;

        ans[i] = nums[nums[i]];
        solve(i + 1, nums, ans);
    }

    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        solve(0, nums, ans);
        return ans;
    }
};
