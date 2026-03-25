class Solution {
public:
    int maxDepth(string s) {
        int maxDepth =0;
        stack<char> st;
        for(char ch : s){
            if(ch == '('){
                st.push(ch);
                maxDepth = max(maxDepth, (int)st.size());
            }
            if(ch==')'){
                st.pop();
            }
        }
        return maxDepth;
    }
};