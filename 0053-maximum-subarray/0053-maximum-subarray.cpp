class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0];
        int curr_sum = nums[0];
        int n = nums.size();

        for(int i=1; i<nums.size(); i++){
            curr_sum = max(curr_sum + nums[i], nums[i]);
            max_so_far = max(max_so_far, curr_sum);
        }
        return max_so_far;
    }
};