class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        vector<vector<int>> store(n + 1);

        for (auto it : mp) {
            int num = it.first;
            int freq = it.second;
            store[freq].push_back(num);
        }

        vector<int> ans;
        for (int i = n; i >= 0 && ans.size() < k; i--) {
            for (int j = 0; j < store[i].size(); j++) {
                if (ans.size() == k)
                    break;
                ans.push_back(store[i][j]);
            }
        }
        return ans;
    }
};