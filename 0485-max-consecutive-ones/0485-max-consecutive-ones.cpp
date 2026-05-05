class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCurrent= 0;
        int current = 0;
        int n = nums.size();
        int j=0;
        while(j<n){
            if(nums[j]==1){
                current+=1;
                maxCurrent = max(maxCurrent,current);
            }
            else{
                current=0;
            }
            j++;
        }
        return maxCurrent;
    }
};