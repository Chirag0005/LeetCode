class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start =0;
        int end = arr.size()-1;
        int mid;
        while(start <= end){
            mid = end+(start-end)/2;//imp test case 1 6 4 2 3
            // mid = start + (end - start) / 2;
            if(arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
        }
        return -1;
    }
};