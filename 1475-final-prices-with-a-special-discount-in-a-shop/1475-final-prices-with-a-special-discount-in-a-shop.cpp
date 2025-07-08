class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int> ans=prices;
        for(int i=0;i<n;i++){
             while (!st.empty() && prices[st.top()] >= prices[i]) {
                int idx = st.top();
                st.pop();
                ans[idx] = prices[idx] - prices[i];
            }
            
            st.push(i);
        }
        return ans;
    }
};

