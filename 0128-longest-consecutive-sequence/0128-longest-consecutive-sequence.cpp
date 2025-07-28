class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int longest =0;
        for(int num : set){
            if(set.find(num-1)==set.end()){
                int current= num;
                int streak=1;
                while(set.find(current+1)!=set.end()){
                    current++;
                    streak++;
                }
                longest = max(longest,streak);
            }
        }
        return longest;
    }
};