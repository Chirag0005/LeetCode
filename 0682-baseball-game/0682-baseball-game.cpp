class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for(string ch : operations){
            
            if(ch=="+"){
                int a = st.top();st.pop();
                int b = st.top();
                int sum = a+b;
                st.push(a);
                st.push(sum);
            }
            else if(ch=="D"){
                st.push(2*st.top());
            }
            else if(ch=="C"){
                st.pop();
            }
            else{
                st.push(stoi(ch));
            }
            
        }
        int add=0;
        while(!st.empty()){
            add+=st.top();
            st.pop();
        }
        return add;
    }
};