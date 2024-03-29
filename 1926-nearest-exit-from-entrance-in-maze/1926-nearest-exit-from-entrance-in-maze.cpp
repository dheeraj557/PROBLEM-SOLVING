class Solution {
public:
    vector<int>rowDir = {-1, 1, 0, 0};
    vector<int>colDir = {0, 0, -1, 1};
    bool isAtBorder(vector<vector<char>>&maze, int row, int col)
    {
        if ((row == 0) || (row == maze.size() - 1)) return true;
        if ((col == 0) || (col == maze[0].size() - 1)) return true;
        return false;
    }
    bool isValidStep(vector<vector<char>>&maze, int& row, int& col)
    {
        int m = maze.size(), n = maze[0].size();
        if (row < 0 || row == m || col < 0 || col == n || maze[row][col] == '+') return false;
        else return true;
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
    {
        queue<pair<int, int>>q;
        q.push({entrance[0], entrance[1]});
        int pathLen = 0;
        maze[entrance[0]][entrance[1]] = '+';
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int currRow = q.front().first;
                int currCol = q.front().second;
                q.pop(); 
                for (int dirIdx = 0; dirIdx < 4; dirIdx++)
                {
                    int newRow = currRow + rowDir[dirIdx];
                    int newCol = currCol + colDir[dirIdx];
                    if (isValidStep(maze, newRow, newCol)) 
                    {
                        maze[newRow][newCol] = '+';
                        if (isAtBorder(maze, newRow, newCol)) 
                            return (pathLen + 1); 
                        else q.push({newRow, newCol});
                    }
                }
            }
            pathLen++; 
        }
        return -1;
    }
};