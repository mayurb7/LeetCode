class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double iter=0;
        double maxSum=INT_MIN;
        double currSum=0;

        for(int i=0 ; i<k ; i++){
            currSum+=nums[i];
        }

        maxSum=max(currSum,maxSum);
        for(int i=k ; i<nums.size() ; i++){
            currSum-=nums[i-k];
            currSum+=nums[i];

            maxSum=max(currSum,maxSum);
        }

        return maxSum/k;
    }
};