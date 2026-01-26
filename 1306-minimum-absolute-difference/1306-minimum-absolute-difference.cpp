class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minDiff=INT_MAX;
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());

        for(int i=0 ; i<arr.size()-1 ; i++){
            int currDiff=arr[i+1]-arr[i];
            if(minDiff>currDiff){
                ans.clear();
                minDiff=currDiff;
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(minDiff==currDiff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }

        return ans;
    }
};