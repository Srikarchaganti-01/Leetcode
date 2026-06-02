class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int mini = INT_MAX;
        int count;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                count = 0;
                count = landStartTime[i] + landDuration[i];
                count = max(count,waterStartTime[j]);
                count = count +  waterDuration[j];
                mini = min(mini,count);

                count = 0;
                count = waterStartTime[j] + waterDuration[j];
                count = max(count,landStartTime[i]);
                count = count +  landDuration[i];
                mini = min(mini,count);
            }
        }
        return mini;
    }
};