class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        if(k==1) return nums;

        for(int i=0 ; i<nums.size()-k+1 ; i++){
            for(int j=i+1 ; j<i+k ; j++){
                if(nums[j]!=nums[j-1]+1){
                    ans.push_back(-1);
                    break;
                }
                if(j==i+k-1){
                    ans.push_back(nums[j]);
                }
            }
        }

        return ans;
    }
};