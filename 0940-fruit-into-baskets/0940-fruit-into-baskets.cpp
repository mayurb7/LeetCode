class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxWindow=0;
        int p1=0;
        int p2=0;
        unordered_map<int,int> mp;
    
        while(p2<fruits.size()){
            mp[fruits[p2]]++;
            p2++;

            while(mp.size()>2){
                mp[fruits[p1]]--;
                if(mp[fruits[p1]]==0){
                    mp.erase(fruits[p1]);
                }
                p1++;
            }

            maxWindow=max(p2-p1, maxWindow);
        }

        return maxWindow;
    }
};