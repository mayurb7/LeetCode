class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int p1=0;
        int p2=0;
        int n=nums.size();
        int maxWindow=0;
        int currCount=0;

        while(p2<n){
            if(nums[p2]==0){
                currCount++;
            }
            p2++;
            while(currCount>k){
                if(nums[p1]==0){
                    currCount--;
                }
                p1++;
            }

            maxWindow=max(maxWindow,p2-p1);
        }

        return maxWindow;
    }
};