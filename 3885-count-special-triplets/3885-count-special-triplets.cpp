class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        long long count=0;
        int mod=1000000007;

        for(int i=0 ; i<nums.size() ; i++){
            mp2[nums[i]]++;
        }

        for(int i=0 ; i<nums.size() ; i++){
            mp2[nums[i]]--;
            if(mp1[nums[i]*2]>0 && mp2[nums[i]*2]>0){
                long long ans= (1LL * mp1[nums[i]*2] * mp2[nums[i]*2])%mod;
                count=(count+ans)%mod;
            }
            mp1[nums[i]]++;
        }

        return count;
    }
};