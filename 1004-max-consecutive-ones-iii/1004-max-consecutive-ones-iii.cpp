class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0;
        int maxCount=0;
        int n = nums.size();
        int zero=0;
        for(int right = 0;right<n;right++)
        {
            if(nums[right]==0)
            {
                zero++;
            }

            while(zero>k)
            {
                if(nums[left]==0)
                {
                    zero--;
                }
                left++;
            }
            maxCount= max(maxCount,right-left+1);
        }
    return maxCount;
    }
};