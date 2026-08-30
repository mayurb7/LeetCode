class Solution {
public:
    int countValidPrefixes(string s) {
        int one=0;
        int zero=0;
        int ans=0;

        for(char i:s){
            if(i=='0')zero++;
            else one++;

            if(one-zero==1 || one-zero==0 || one-zero==-1){
                ans++;
            }
        }

        return ans;
        
    }
};