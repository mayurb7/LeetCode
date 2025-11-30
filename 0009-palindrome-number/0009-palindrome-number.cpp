class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        vector<int> num;

        while(x>0){
            num.push_back(x%10);
            x=x/10;
        }

        int p1=0;
        int p2=num.size()-1;
        while(p1<p2){
            if(num[p1]!=num[p2]){
                return false;
            }
            p1++;
            p2--;
        }

        return true;
    }
};