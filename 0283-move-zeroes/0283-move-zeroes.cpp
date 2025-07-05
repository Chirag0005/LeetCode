class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonIndexZero=0;

        for(int i=0; i<nums.size();i++){
            if(nums[i]!=0){
                nums[nonIndexZero++]= nums[i];
            }
        }

        while(nonIndexZero < nums.size()){
            nums[nonIndexZero++]= 0;
        }
    }
};