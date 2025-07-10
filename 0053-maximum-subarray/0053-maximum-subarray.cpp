class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int curr= nums[0];
        int n = nums.size();

        for(int i=1;i<n;i++){
            curr = max(nums[i],curr+nums[i]);
            maxi = max(maxi,curr);
        }
        return maxi;
    }
};