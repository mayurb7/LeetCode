class Solution {
public:
    vector<vector<int>> ans;

    void comb(vector<int> arr,int curr,int n ,int k){
        if(arr.size()==k){
            ans.push_back(arr);
            return;
        }
        
        for(int i=curr ; i<=n ; i++){
            arr.push_back(i);
            comb(arr,i+1,n,k);
            arr.pop_back();
        }
    }  

    vector<vector<int>> combine(int n, int k) {
        vector<int> arr;
        comb(arr,1,n,k);
        return ans;
    }
};