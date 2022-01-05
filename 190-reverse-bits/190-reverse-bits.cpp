class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t bit = 0; uint32_t ans = 0;
        for(int i = 31; i >= 0; i--){
            if((1 << i)&n) bit = 1;
            else bit = 0;
            ans += bit * (pow(2, 31 - i));
        }
        return ans;
    }
};