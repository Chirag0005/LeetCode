class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        vector<int> ans(nums.size());
        int i=0;
        for(int j=0;j<pos.size();j++){
            ans[i++]=pos[j];
            ans[i++]=neg[j];
        }
        return ans;
    }
};