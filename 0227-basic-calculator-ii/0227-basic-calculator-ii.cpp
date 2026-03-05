class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num=0;
        char sign = '+';

        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                num = num*10+(s[i]-'0');
            }
            if((!isdigit(s[i]) && s[i]!=' ') || i==s.size()-1){
                if(sign=='+'){
                    st.push(num);
                }
                if(sign=='-'){
                    st.push(-num);
                }
                if(sign=='*'){
                    int top= st.top();st.pop();
                    st.push(num*top);
                }
                if(sign=='/'){
                    int top = st.top(); st.pop();
                    st.push(top/num);
                }

                num=0;
                sign = s[i];
            }
        }
        int result =0;
        while(st.size()>0){
            result+=st.top();
            st.pop();
        }
        return result;
    }
};