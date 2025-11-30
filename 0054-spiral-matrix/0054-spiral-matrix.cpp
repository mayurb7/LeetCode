class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<vector<int>> visited(n,vector<int>(m,0));
        vector<int> ans;
        int i=0;
        int j=0;
        int total=m*n;
        int currtotal=0;

        while(currtotal<total){
            while(i<n && j<m && i>=0 && j>=0 && visited[i][j]==0){
                ans.push_back(matrix[i][j]);
                visited[i][j]=1;
                j++;
                currtotal++;
            }
            j--;
            i++;
            while(i<n && j<m && i>=0 && j>=0 && visited[i][j]==0){
                ans.push_back(matrix[i][j]);
                visited[i][j]=1;
                i++;
                currtotal++;
            }
            i--;
            j--;
            while(i<n && j<m && i>=0 && j>=0 && visited[i][j]==0){
                ans.push_back(matrix[i][j]);
                visited[i][j]=1;
                j--;
                currtotal++;
            }
            j++;
            i--;
            while(i<n && j<m && i>=0 && j>=0 && visited[i][j]==0){
                ans.push_back(matrix[i][j]);
                visited[i][j]=1;
                i--;
                currtotal++;
            }
            i++;
            j++;
        }

        return ans;
    }
};