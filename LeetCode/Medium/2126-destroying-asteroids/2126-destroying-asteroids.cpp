class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long mas = mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
            if(mas >= asteroids[i]) mas = mas + asteroids[i];
            else return false;
        }
        return true;
    }
};