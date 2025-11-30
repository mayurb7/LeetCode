class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(int i=0; i<strs.size(); i++){
            string current=strs[i];
            sort(current.begin(), current.end());
            mp[current].push_back(strs[i]);
        }

        for(auto it: mp){
            ans.push_back(move(it.second));
        }

        return ans;
    }
};