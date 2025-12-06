class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        string ans;

        for(char ch: s){
            mp[ch]++;
        }

        for(pair<char,int> p: mp){
            pq.push({p.second,p.first});
        }

        while(!pq.empty()){
            int n=pq.top().first;
            char p=pq.top().second;

            for(int i=0 ; i<n ; i++){
                ans.push_back(p);
            }

            pq.pop();
        }

        return ans;
    }
};