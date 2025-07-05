class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //brute force sort it using sort(nums.begin(),nums.end()) then check using for loop 
        ///optimise sum of number 0 to n is n* (n+1)/2

        int size = nums.size();
        int requiredSum = (size*(size+1))/2;
        int totalSum = 0;

        for(int i=0; i<size; i++){
            totalSum+=nums[i];
        }

        return requiredSum-totalSum;
    }
};