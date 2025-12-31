class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans=0;

        for(int i=0 ; i<nums.size() ; i++){
            int j=i+1;
            while(j<nums.size() && nums[j]-nums[i]<=k){
                if(nums[j]-nums[i]==k){
                    ans++;
                }
                
                j++;
            }
        }

        return ans;
    }
};