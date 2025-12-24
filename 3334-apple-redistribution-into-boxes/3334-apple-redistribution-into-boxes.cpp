class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int total=0;
        int n=capacity.size();

        for(int i : apple){
            total+=i;
        }

        int i=n-1;
        while(total>0){
            total-=capacity[i];
            i--;
        }

        return n-i-1;
    }
};