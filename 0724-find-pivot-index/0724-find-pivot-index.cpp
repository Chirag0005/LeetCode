class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        // Step 1: Calculate the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }
        //int leftSum = 0;
        // Step 2: Iterate through the array to find the pivot index
        for (int i = 0; i < nums.size(); ++i) {
            // Calculate right sum by subtracting left sum and current element from total sum
            int rightSum = totalSum - leftSum - nums[i];
            
            if(leftSum == rightSum){
                return i;
            }
            // Update left sum for the next iteration
            leftSum += nums[i];
        }

        // No pivot index found, return -1
        return -1;
    }
};