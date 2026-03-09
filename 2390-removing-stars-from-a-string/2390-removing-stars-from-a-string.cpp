class Solution {
public:
    string removeStars(string s) {

        stack<char> st;

        for(char ch : s){

            if(ch == '*'){
                if(!st.empty())
                    st.pop();
            }
            else{
                st.push(ch);
            }
        }

        string ans="";

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// class Solution {
// public:
//     string removeStars(string s) {
//          int n = s.size();
//         int writePos = 0;  // This pointer will indicate where to write next character

//         for (int i = 0; i < n; ++i) {
//             if (s[i] == '*') {
//                 // If it's a star, remove the closest character to the left
//                 writePos--;
//             } else {
//                 // Otherwise, write the character at the current write position
//                 s[writePos] = s[i];
//                 writePos++;
//             }
//         }

//         // Since writePos is the new length, return the substring up to that length
//         return s.substr(0, writePos);
    
//     }
// };