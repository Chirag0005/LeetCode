class Solution {
public:

    void rev(vector<char>& s,int start,int end){
        if(start>end){
            return;
        }
        swap(s[start++],s[end--]);
        rev(s,start,end);
    }

    void reverseString(vector<char>& s) {
        int start =0;
        int end = s.size()-1;
        rev(s,start,end);
    }
};




// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int st=0;
//         int end=s.size()-1;
//         while(st<end){
//             swap(s[st++],s[end--]);
//         }
//     }
// };