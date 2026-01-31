class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,0));
        for(int i=0;i<m;i++){
            dp[i][0]=1;
        }

        for(int i=0;i<n;i++){
            dp[0][i]=1;
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]= dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
    }
};













// class Solution {
// public:
//     int solve(int i, int j) {
//         // base case: reached start cell
//         if (i == 0 && j == 0)
//             return 1;

//         // out of grid
//         if (i < 0 || j < 0)
//             return 0;

//         // move from top + left
//         return solve(i - 1, j) + solve(i, j - 1);
//     }

//     int uniquePaths(int m, int n) {
//         return solve(m - 1, n - 1);
//     }
// };


//above will give us tle so solve using dp

// class Solution {
// public:
//     int solve(int i, int j, vector<vector<int>>& dp) {
//         // reached start cell
//         if (i == 0 && j == 0)
//             return 1;

//         // out of grid
//         if (i < 0 || j < 0)
//             return 0;

//         // already solved
//         if (dp[i][j] != -1)
//             return dp[i][j];

//         // store result
//         dp[i][j] = solve(i - 1, j, dp) + solve(i, j - 1, dp);
//         return dp[i][j];
//     }

//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return solve(m - 1, n - 1, dp);
//     }
// };

