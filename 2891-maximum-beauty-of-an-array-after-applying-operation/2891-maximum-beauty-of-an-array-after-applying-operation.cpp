class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0;
        int h=0;

        int p1=0;
        int p2=0;
        int maxWindow=0;

        while(p2<nums.size()){
            l=nums[p2]-k;

            while(nums[p1]+k<l){
                p1++;
            }

            p2++;
            maxWindow=max(maxWindow,p2-p1);
        }

        return maxWindow;
    }
};