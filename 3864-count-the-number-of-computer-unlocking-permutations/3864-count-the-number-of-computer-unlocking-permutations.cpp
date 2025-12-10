class Solution {
public: 
    int fact(int comp){
        int Mod=1000000007;
        
        long long ans=1;
        int count=2;
        for(int i=0; i<comp-1 ; i++){
            ans=(ans*count)%Mod;
            count++;
        }
        return ans%Mod;

        
    }
    
    int countPermutations(vector<int>& complexity) {
        int min=complexity[0];
        
        int comp=0;
        for(int i=1 ; i<complexity.size() ; i++){
            if(complexity[i]>min){
                comp++;
            }
            else{
                return 0;
            }
        }
        return fact(comp);
    }
};