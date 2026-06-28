class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxP= arr[0];
        int minP=arr[0];
        int ans = arr[0];

        for(int i=1;i<arr.size();i++){
            if(arr[i]<0){
                swap(minP,maxP);
            }

            maxP = max(maxP*arr[i],arr[i]);
            minP = min(minP* arr[i],arr[i]);
            ans= max(ans,maxP);
        }
        return ans;
    }
};