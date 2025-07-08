class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> result(n,-1);
        result[n-1]=-1;
        st.push(arr[n-1]);

        for (int i = n - 2; i >= 0; i--) {
            result[i] = st.top(); 
            st.push(max(arr[i], st.top()));
        }
        return result;
    }
};