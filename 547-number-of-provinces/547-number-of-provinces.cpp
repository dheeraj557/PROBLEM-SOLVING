class Solution {
private:
    vector<vector<int>> isConnected;
    vector<bool> visited;
    void dfs(int i){
        visited[i] = true;
        for(int j = 0; j < isConnected[i].size(); ++j){
            if(i != j && !visited[j] && isConnected[i][j]){
                dfs(j);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        visited.clear();
        visited.resize(isConnected.size(), false);
        this->isConnected = isConnected;
        int ans = 0;
        for(int i = 0; i < isConnected.size(); ++i){
            if(!visited[i]) {
                ++ans;
                dfs(i);
            }
        }
        return ans;
    }
};