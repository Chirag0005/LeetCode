class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;
        for(int num : nums1){
            freq[num]++;
        }
        for(int num: nums2){
            if(freq[num]>0){
                freq[num]--;
                result.push_back(num);
            }
        }
        return result;

    }
};