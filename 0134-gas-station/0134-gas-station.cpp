class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n= gas.size()-1;
        int totalGas=0;
        int totalCost=0;

        for(int i=0 ; i<=n ; i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
        }

        if(totalGas<totalCost){
            return -1;
        }

        int gasTank=0;
        int it=0;

        for(int i=0 ; i<=n ; i++){
            gasTank+=gas[i] - cost[i];

            if(gasTank<0){
                gasTank=0;
                it=i+1;
            }

        }

        return it;
    }
};