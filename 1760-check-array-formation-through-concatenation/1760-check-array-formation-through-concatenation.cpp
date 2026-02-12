class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int,int> mp;
        
        for(int i=0 ; i<arr.size() ; i++){
            mp[arr[i]]=i+1;
        }

        for(int i=0 ; i<pieces.size() ; i++){
            if(mp[pieces[i][0]]==0) return false;
            for(int j=1 ; j<pieces[i].size() ; j++){
                if(mp[pieces[i][j]]==0) return false;

                if(mp[pieces[i][j]]-1!=mp[pieces[i][j-1]]){
                    return false;
                }
            }
        }

        return true;

    }
};