class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int nonIndexZero=0;

        // for(int i=0; i<nums.size();i++){
        //     if(nums[i]!=0){
        //         nums[nonIndexZero++]= nums[i];
        //     }
        // }

        // while(nonIndexZero < nums.size()){
        //     nums[nonIndexZero++]= 0;
        // }


        int left = 0;
        int right =0;
        for(int i=0;i<nums.size();i++){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
            else{
                right++;
            }
        }
    }
};