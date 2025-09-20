// class Solution {
// public:

//     bool isValid(vector<int>& arr,int n,int m,int mid){
//         int requiredDays=1; int load=0;
//         for(int i=0;i<n;i++){

//             if (arr[i] > mid) return false;
//             if(load + arr[i]<=mid){
//                 load+=arr[i];
//             }
//             else{
//                 requiredDays++;
//                 load=arr[i];
//                 if(requiredDays > m) return false;
//             }
//         }
//         return true;
//     }

//     int shipWithinDays(vector<int>& weights, int days) {
//         int n= weights.size();
//         int sum =0;
//         int start = INT_MIN;
//         //if(days>n) return -1;
//         for(int i=0;i<n;i++){
//              sum += weights[i];
//             start = max(start, weights[i]);
//         }

//         int end=sum;
//         int ans=-1;
//         while(start<=end){
//             int mid = start +(end-start)/2;
//             if(isValid(weights,n,days,mid)){
//                 end = mid-1;
//                 ans=mid;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:

    bool isValid(vector<int>& arr,int n,int m,int mid){
        int requiredDays=1; 
        int load=0;
        for(int i=0;i<n;i++){
            if (arr[i] > mid) return false; 
            if(load + arr[i] <= mid){
                load += arr[i];
            }
            else{
                requiredDays++;
                load = arr[i];
                if(requiredDays > m) return false;
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long sum = 0;
        int start = INT_MIN;

        for(int i=0; i<n; i++){
            sum += weights[i];                  // ✅ accumulate sum
            start = max(start, weights[i]);     // ✅ get max element
        }

        long long end = sum;
        int ans = -1;
        while(start <= end){
            long long mid = start + (end - start)/2;
            if(isValid(weights, n, days, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
