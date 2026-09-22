class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        map<int, int> mp;
        int ans=0;

        for(int i=0 ; i<costs.size() ; i++){
            mp[costs[i]]++;
        }

        for(auto it : mp){
            while(coins>=it.first && it.second>0){
                coins-=it.first;
                it.second--;
                ans++;
            }
        }

        return ans;
    }
};