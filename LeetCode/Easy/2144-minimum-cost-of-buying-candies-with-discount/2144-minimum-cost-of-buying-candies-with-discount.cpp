class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n = cost.size();
        int counter = 1;
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            if(counter<=2){
                sum+= cost[i];
                counter++;
            }else if(counter == 3){
                counter = 1;
                continue;
            }
        }
        return sum;
    }
};