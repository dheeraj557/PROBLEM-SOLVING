class Solution {
public:
    double findSlope(vector<int>& a, vector<int>& b ) {
        double numerator = b[1] - a[1];
        double denominator = b[0] - a[0];
        
        if(denominator == 0) return INT_MAX;
        
        return numerator/denominator;
    }
    
    bool checkStraightLine(vector<vector<int>>& coords) {
        int n = coords.size();
        double slope = findSlope(coords[0], coords[1]);
        
        for(int i = 2; i < n; ++i) {
            if(findSlope(coords[i], coords[i - 1]) != slope) return false;
        }
        
        return true;
    }
};