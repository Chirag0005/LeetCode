class Solution {
public:

    int recursion(vector<int>& arr,int s, int e, int t){
        if(s>e) return -1;

        int mid = s +(e-s)/2;

        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid]>t){
            return recursion (arr,s,mid-1,t);
        }
        else{
            return recursion (arr,mid+1,e,t);
        }
    }

    int search(vector<int>& nums, int target) {
        int start=0;
        int end = nums.size()-1;
        
        return recursion(nums,start,end,target);
    }
};