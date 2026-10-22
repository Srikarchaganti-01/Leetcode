class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;

        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }

        int i = 1;
        for(auto& it : mp){
            it.second = i;
            i++;
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};