class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        int power=0;
        sort(happiness.begin(), happiness.end());
        int p=happiness.size()-1;


        while(k--){
            if(happiness[p]-power<=0){
                break;
            }
            ans+=happiness[p]-power;
            power++;
            p--;
        }

        return ans;
    }
};