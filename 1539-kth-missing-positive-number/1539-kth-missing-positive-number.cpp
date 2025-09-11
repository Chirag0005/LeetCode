// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int num=1;
//         int index=0;
//         while(true){
//             if(index<arr.size() && arr[index]==num){
//                 index++;
//             }
//             else {
//                 k--;
                
//                 if(k==0) return num;
//             }
//             num++;
//         }
//     }
// };

//optimised
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start =0; int end = arr.size()-1;int mid ; 
        int ans = arr.size();//intiltised just beacause of the case when the array is already sorted

        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid]-mid -1 >= k){
                end=mid-1;
                ans=mid;
            }else{
                start = mid+1;
            }
        }
        return ans+k;
    }
};