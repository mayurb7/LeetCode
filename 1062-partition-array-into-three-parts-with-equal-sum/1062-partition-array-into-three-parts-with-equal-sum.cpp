class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int pings=0;
        int currSum=0;

        for(int it: arr){
            sum+=it;
        }

        if(sum%3!=0) return false;
        sum=sum/3;

        for(int it : arr){
            currSum+=it;
            if(currSum==sum){
                pings++;
                currSum=0;
            }
        }

        if(pings>=3){
            return true;
        }
        
        return false;
    }
};