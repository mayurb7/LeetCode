class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p1=0; 
        vector<int> ans;
        int p2;


        while(p1<nums.size() && nums[p1]<0){
            p1++;
        }
        p2=p1-1;

        while(p1<nums.size() || p2>=0){
            int p1S;
            int p2S;

            if(p1>=nums.size()){
                p1S=INT_MAX;
            }
            else{
                p1S=nums[p1]*nums[p1];
            }
            
            if(p2<0){
                p2S=INT_MAX;
            }
            else{
                p2S=nums[p2]*nums[p2];
            }

            if(p1S>p2S){
                ans.push_back(p2S);
                p2--;
            }
            else{
                ans.push_back(p1S);
                p1++;
            }
        }

        return ans;
    }
};