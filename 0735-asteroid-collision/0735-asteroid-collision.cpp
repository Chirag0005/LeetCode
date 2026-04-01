class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int a:asteroids){
            bool collide = false;
            
            while(st.size()>0 && st.top()>0 && a <0){
                if(st.top() > -a ){
                    collide =  true;
                    break;
                }
                else if(st.top() < -a){
                    st.pop();
                }
                else{
                    collide = true;
                    st.pop();
                    break;
                }
            }
            if(!collide){
                st.push(a);
            }
        }

        vector<int> result;
        while(st.size()>0){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};