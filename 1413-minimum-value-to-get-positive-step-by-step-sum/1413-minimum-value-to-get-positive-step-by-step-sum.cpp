class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int n= nums.size();
        vector<int>num(n);
        num[0]=nums[0];
        int minVal=num[0];
        for(int i=1;i<n;i++){
            
            num[i]=num[i-1]+nums[i];
            minVal= min(minVal,num[i]);
        }

        if(minVal>0){
            return 1;
        }
        else{
            return 1-minVal;
        }
    }
};