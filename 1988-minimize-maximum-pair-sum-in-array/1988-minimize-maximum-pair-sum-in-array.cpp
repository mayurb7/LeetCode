class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int p1=0;
        int p2=nums.size()-1;

        while(p2>p1){
            maxi=max(maxi,nums[p1]+nums[p2]);

            p1++;
            p2--;
        }

        return maxi;
    }
};