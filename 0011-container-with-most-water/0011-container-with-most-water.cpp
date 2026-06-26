class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea =0;
        int left =0;
        int right = height.size()-1;
        while(left<=right){
            int heightt = min(height[left],height[right]);
            int width = right-left;
            int area = heightt * width;
            maxArea = max(area,maxArea);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};


