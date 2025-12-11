class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        vector<int> bottom(n+1,n+2);
        vector<int> top(n+1,-1);
        vector<int> left(n+1,n+2);
        vector<int> right(n+1,-1);
        int count=0;

        for(vector<int> curr : buildings){
            bottom[curr[0]]= min(curr[1],bottom[curr[0]]);
            top[curr[0]]= max(curr[1],top[curr[0]]);

            left[curr[1]]= min(curr[0],left[curr[1]]);
            right[curr[1]]= max(curr[0],right[curr[1]]);
        }

        for(auto curr : buildings){
            int x=curr[0];
            int y=curr[1];

            if(y>bottom[x] && y<top[x] && x>left[y] && x<right[y]){
                count++;
            }
        }
        

        return count;
    }
};