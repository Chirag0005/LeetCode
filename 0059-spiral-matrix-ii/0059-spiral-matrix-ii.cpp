class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> matrix(n, vector<int>(n));
        
        int row = matrix.size();
        int column = matrix[0].size();

        int top=0;
        int bottom = row-1;
        int left = 0;
        int right = column-1;
        int num=1;
        while(num<=n*n){
            for(int i=left;i<=right;i++){
                matrix[top][i]=num++;
            }
            top++;

            for(int i=top;i<=bottom;i++){
               matrix[i][right]=num++;;
            }
            right--;

            if(top<=bottom){
                for(int i = right ; i>=left;i--){
                    matrix[bottom][i]=num++;
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=num++;
                }
                left++;
            }
        }
        return matrix;
    }
};