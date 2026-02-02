class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int cost=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        cost+=nums[0];

        for(int i=1 ; i<nums.size() ; i++){
            pq.push(nums[i]);
        }

        cost+=pq.top();
        pq.pop();
        cost+=pq.top();

        return cost;
    }
};