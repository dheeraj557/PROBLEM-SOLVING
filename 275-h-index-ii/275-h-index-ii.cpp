class Solution {
public:
 int hIndex(vector<int>& citations) {
 int n = citations.size(), lo = 0, hi = n - 1;
 while (lo <= hi) {
 int mid = lo + ((hi - lo) / 2);
 if (citations[n - 1 - mid] >= mid + 1) {
 lo = mid + 1;
 } else {
 hi = mid - 1;
 }
 }
 return lo;
 }
};