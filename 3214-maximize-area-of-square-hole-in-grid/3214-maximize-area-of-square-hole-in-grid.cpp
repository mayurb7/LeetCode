class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(vBars.begin(),vBars.end());
        sort(hBars.begin(),hBars.end());

        int maxh=1;
        int maxv=1;
        int currh=1;
        int currv=1;

        for(int i=0 ; i<hBars.size()-1 ; i++){
            if(hBars[i]==hBars[i+1]-1){
                currh++;
            }
            else{
                currh=1;
            }

            maxh=max(currh,maxh);
        }

        for(int i=0 ; i<vBars.size()-1 ; i++){
            if(vBars[i]==vBars[i+1]-1){
                currv++;
            }
            else{
                currv=1;
            }

            maxv=max(currv,maxv);
        }   

        cout<<maxv<<" "<<maxh;
        int rod=min(maxh,maxv);
        return (rod+1)*(rod+1);
    }
};