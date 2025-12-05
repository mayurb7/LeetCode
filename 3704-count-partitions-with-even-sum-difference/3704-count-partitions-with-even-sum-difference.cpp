class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum=0;
        int count=0;
        int currSum=0;

        for(int i=0 ; i<nums.size() ; i++){
            totalSum+=nums[i];
        }

        for(int i=0 ; i<nums.size()-1 ; i++){
            currSum+=nums[i];
            totalSum-=nums[i];

            if((totalSum-currSum)%2==0){
                count++;
            }
        }

        return count;
    }
};