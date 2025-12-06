class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        int p1=0;
        int p2=0;

        for(int i=0 ; i<p.size() ; i++){
            mp1[p[i]]++;
        }

        while(p2<p.size()){
            mp2[s[p2]]++;
            p2++;
        }
        if(mp1==mp2){
            ans.push_back(p1);
        }


        while(p2<s.size()){
            mp2[s[p2]]++;
            mp2[s[p1]]--;

            if(mp2[s[p1]]==0){
                mp2.erase(s[p1]);
            }

            if(mp1==mp2){
                ans.push_back(p1+1);
            }

            p1++;
            p2++;
        }

        return ans;
    }
};