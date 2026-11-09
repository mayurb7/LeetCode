class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;

        for(int i=0 ; i<arr1.size() ; i++){
            bool c=true;
            for(int j=0 ; j<arr2.size() ; j++){
                int dist = max(arr1[i]-arr2[j],arr2[j]-arr1[i]);
                if(dist<=d){
                    c=false;
                    break;
                }
            }
            if(c){
                cout<<arr1[i]<<" ";
                count++;
            }
        }

        return count;
    }
};