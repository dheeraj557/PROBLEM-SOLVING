class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured == 0)
            return 0.00000;
        double glasses[1005][1005] = {0};
        glasses[0][0] = poured;
        for(int i = 0; i<=query_row; i++){
            for(int j = 0; j<=i; j++)
            {
                double overflow = max(glasses[i][j]-1, 0.0);
				glasses[i][j] -= overflow;
                glasses[i+1][j] += overflow/2.0;
                glasses[i+1][j+1] += overflow/2.0;
            }
        }
        return glasses[query_row][query_glass];
    }
};