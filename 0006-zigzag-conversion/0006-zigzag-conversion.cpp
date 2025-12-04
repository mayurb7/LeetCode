class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1) return s;
        vector<string> mat(numRows,"");
        string ans;
        int p=0;

        int i=0;
        int j=0;
        int direction=-1;

        while(i<s.size()){
            if(j==numRows-1 || j==0) direction*=-1;
            mat[j]+=s[i];
            
            if(direction==1){
                j++;
            } 
            else{
                j--;
            }
            i++;
        }

        for(int i=0 ; i<mat.size() ; i++){
            ans+=mat[i];
        }

        return ans;
    }
};