class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int r=0;
        int l=0;
        int d=0;

        for(char it: moves){
            if(it=='R'){
                r++;
            }
            else if(it=='L'){
                l++;
            }
            else{
                d++;
            }
        }

        return abs(r-l)+ d;
    }
};