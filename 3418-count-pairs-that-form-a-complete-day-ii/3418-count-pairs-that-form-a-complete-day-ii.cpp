class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> mp;
        long long ans=0;

        for(int i=0 ; i<hours.size() ; i++){
            ans+=mp[(hours[i]%24)];
            
            if(hours[i]%24 != 0 ) mp[24-(hours[i]%24)]++;
            else mp[0]++;
        }

        return ans;
    }
};