class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        for(int i=0;i<intervals.size();i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(result.empty() || result.back()[1]<start){
                result.push_back({start,end});
            }
            else{
                result.back()[1]=max(result.back()[1],end);
            }
        }
        return result;
    }
};