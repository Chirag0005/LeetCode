class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int add=0;
        for(char ch : s){
            if(ch=='('){
                st.push(ch);
            }
            else{
                if(st.size()>0){
                    st.pop();
                }
                else{
                    add++;
                }
            }
        }
        return add+st.size();
    }
};