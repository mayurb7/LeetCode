class Solution {
public:
    vector<vector<int>> ans;

    void helper(vector<int> candidates, int target, vector<int> curr, int currSum, int i){
        if(currSum>target || i>=candidates.size()){
            return;
        }
        if(currSum==target){
            ans.push_back(curr);
            return;
        }

        helper(candidates,target,curr,currSum,i+1);

        curr.push_back(candidates[i]);
        currSum+=candidates[i];
        helper(candidates,target,curr,currSum,i);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        helper(candidates,target,curr,0,0);

        return ans;
    }
};