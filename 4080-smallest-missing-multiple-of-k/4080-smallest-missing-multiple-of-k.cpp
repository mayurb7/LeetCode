class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        long long missing=k;
        unordered_set<int> st;
        int n=nums.size()-1;

        for(int i: nums){
            st.insert(i);
        }

        while(n>=0){
            if(!st.contains(missing)){
                return missing;
            }
            else{
                missing+=k; 
            }
            n--;
        }

        return missing;
    }
};