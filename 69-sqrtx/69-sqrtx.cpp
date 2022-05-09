class Solution {
public:
 int mySqrt(int x) {
 long long lo = 0, hi = x;
 while (lo <= hi) {
 long long mid = lo + (hi - lo) / 2;
 long long s = mid * mid;
 if (s == x) {
 return mid;
 } else if (s > x) {
 hi = mid - 1;
 } else {
 lo = mid + 1;
 }
 }
 return hi;
 }
};