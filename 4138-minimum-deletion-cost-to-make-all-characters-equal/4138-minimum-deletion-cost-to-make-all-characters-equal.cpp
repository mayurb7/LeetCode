class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long ans=0;
        unordered_map<char,long long> mp;

        for(int i=0 ; i<s.size() ; i++){
            mp[s[i]]+=cost[i];
        }

        long long minNum=0;
        for(pair<char,long long> p : mp){
            ans+=p.second;
            minNum=max(minNum,p.second);
        }

        cout<<ans<<" "<<minNum;
        return ans-minNum;
    }
};