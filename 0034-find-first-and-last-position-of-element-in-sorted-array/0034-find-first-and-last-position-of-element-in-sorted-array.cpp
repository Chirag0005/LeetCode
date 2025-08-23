class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int start =0;
        int end = arr.size()-1;
        int mid;
        int first = -1;
        int last = -1;

        while(start<=end){
           mid = start+(end-start)/2;

            if(arr[mid]==target){
                first = mid;
                end = mid -1;
            }
            else if(arr[mid]< target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    
         start = 0;
        end = arr.size()-1;
        while(start<=end){
            mid = start+(end-start)/2;

            if(arr[mid]==target){
                last = mid;
                start = mid+1;
            }
            else if(arr[mid]< target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        vector<int> a(2);
        a[0]= first;
        a[1]=last;
        return a;
    }
};