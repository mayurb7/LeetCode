class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int ans=0;

        for(char ch : s){
            ans=max(ans,count);

            if(ch=='('){
                count++;
            }
            else if(ch==')'){
                count--;
            }
        }

        return ans;
    }
};