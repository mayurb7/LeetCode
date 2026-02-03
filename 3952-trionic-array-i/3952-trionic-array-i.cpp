class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        bool hit1=false,hit2=false,hit3=false;
        
        while(i<n && nums[i]>nums[i-1]){
            hit1=true;
            i++;
        }
        while(i<n && nums[i]<nums[i-1]){
            hit2=true;
            i++;
        }
        while(i<n && nums[i]>nums[i-1]){
            hit3=true;
            i++;
        }

        return i==nums.size() && hit1 && hit2 && hit3;
    }
};

/*
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int ind = 1, N = nums.size();
        bool left = false, right = false, center = false;

        while(ind < N && nums[ind-1] < nums[ind]){
            left = true;
            ind++;
        }

        while(ind < N && nums[ind-1] > nums[ind]){
            center = true;
            ind++;
        }

         while(ind < N && nums[ind-1] < nums[ind]){
            right = true;
            ind++;
        }


        return left && center && right && ind == N;
    }
};

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n= nums.size();
        if(n<4){
            return false;
        }
        
        int i=0;

        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
        if(i==0){
            return false;
        }
        int P=i;
        
        while(i+1<n && nums[i]>nums[i+1]){
            i++;
        }
        if(i=P){
            return false;
        }
        int Q=i;
        
        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }

        return i==n-1 && Q>P && Q<n-1;
    }
};

*/