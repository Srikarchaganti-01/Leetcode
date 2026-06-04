class Solution {
public:
    vector<int>returndig(int num){
        vector<int>v;
        while(num>0){
            int k=num%10;
            v.push_back(k);
            num = num/10;
        }
        return v;
    }
    int findw(vector<int>v){
        int w = 0;
        if(v.size() < 3) return 0;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]<v[i-1] && v[i]<v[i+1]) w++;
            if(v[i]>v[i-1] && v[i]>v[i+1]) w++;
        }
        return w;
    }
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i=num1;i<=num2;i++){
            vector<int>v = returndig(i);
            ans+=findw(v);
        }
        return ans;
    }
};