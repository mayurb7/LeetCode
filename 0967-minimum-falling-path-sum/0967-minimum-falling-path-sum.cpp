class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        

        for(int i=1 ; i<m ; i++){
            matrix[i][0]+=min(matrix[i-1][0],matrix[i-1][1]);
            for(int j=1 ; j<n-1 ; j++){
                int a=matrix[i-1][j-1];
                int b=matrix[i-1][j];
                int c=matrix[i-1][j+1];

                matrix[i][j]+=min(a,min(b,c));
            }
            matrix[i][n-1]+=min(matrix[i-1][n-2],matrix[i-1][n-1]);
        }

        int ans=INT_MAX;

        for(int i=0 ; i<n ; i++){
            ans=min(ans,matrix[m-1][i]);
        }

        return ans;
    }
};