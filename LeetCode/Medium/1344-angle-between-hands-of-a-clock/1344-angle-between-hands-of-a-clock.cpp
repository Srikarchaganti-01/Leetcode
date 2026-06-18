class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x = abs(30 * hour - 11.0 * minutes / 2);
        if(x>180.0)x=abs(360-x);
        return x;
    }
};