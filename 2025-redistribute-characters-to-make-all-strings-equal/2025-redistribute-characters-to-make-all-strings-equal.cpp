class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        int k=words.size();

        for(int i=0 ; i<words.size() ; i++){
            for(char ch : words[i]){
                mp[ch]++;
            }
        }

        for(pair<char,int> it : mp){
            if(it.second%k!=0){
                return false;
            }
        }

        return true;

    }
};