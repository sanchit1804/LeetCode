class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;
        for (int i = 0; i < gas.size(); i++) {
            
        }

        
        int start=0;
        int energy=0;
        for(int i=0;i<gas.size();i++){
            totalGas += gas[i];
            totalCost += cost[i];
            energy+=gas[i]-cost[i];
            if(energy<0){
                start=i+1;
                energy=0;
            }
        }
        if(totalGas<totalCost) return -1;
        
       return start;
    }
};