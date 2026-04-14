class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>v;
        if(sides.size() > 3 || sides.size() < 3) return v;
        sort(sides.begin(),sides.end());
        if(sides[0] + sides[1] <= sides[2]) return v;
        double a = acos((pow(sides[0],2) + pow(sides[2],2) -pow(sides[1],2))/(2*sides[0]*sides[2]));
        double b = acos((pow(sides[1],2) + pow(sides[0],2) -pow(sides[2],2))/(2*sides[1]*sides[0]));
        double c = acos((pow(sides[1],2) + pow(sides[2],2) -pow(sides[0],2))/(2*sides[1]*sides[2]));
        double ra = a * (180.0 / 3.14159265358979);
        double rb = b * (180.0 / 3.14159265358979);
        double rc = c * (180.0 / 3.14159265358979);
        v.push_back(ra);
        v.push_back(rb);
        v.push_back(rc);
        sort(v.begin(),v.end());
        return v;
    }
};