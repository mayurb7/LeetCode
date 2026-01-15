class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long postSum=0;
        long long preSum=0;
        int count=0;

        for(int i : nums){
            postSum+=i;
        }

        for(int i=0 ; i<nums.size()-1 ; i++){
            preSum+=nums[i];
            postSum-=nums[i];

            if(preSum>=postSum){
                count++;
            }
        }

        return count;
    }
};