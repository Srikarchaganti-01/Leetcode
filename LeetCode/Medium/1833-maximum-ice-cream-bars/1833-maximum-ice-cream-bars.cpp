class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum = 0;
        int ans = 0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            if(sum <= coins)ans++;
            else return ans;
        }
        return costs.size();
    }
};