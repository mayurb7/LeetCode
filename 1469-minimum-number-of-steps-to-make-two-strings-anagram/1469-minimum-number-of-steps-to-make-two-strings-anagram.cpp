class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        int ans=0;

        for(int i=0 ; i<s.size() ; i++){
            smap[s[i]]++;
        }

        for(int i=0 ; i<t.size() ; i++){
            tmap[t[i]]++;
            if(tmap[t[i]]>smap[t[i]]){
                ans++;
            }
        }

        return ans;

    }
};