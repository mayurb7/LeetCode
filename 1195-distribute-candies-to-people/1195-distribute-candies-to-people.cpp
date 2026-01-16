class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);

        int currCap=1;
        int i=0;
        while(candies>0){
            ans[i%ans.size()]+=min(currCap,candies);
            candies-=currCap;
            currCap++;
            i++;
        }

        return ans;
    }
};