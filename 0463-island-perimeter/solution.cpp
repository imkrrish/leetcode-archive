class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int land = 0, neighbors = 0;
        int row = grid.size();
        int col = grid[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    land++;
                    if (i + 1 < row && grid[i + 1][j] == 1)
                        neighbors++; // down

                    if (j + 1 < col && grid[i][j + 1] == 1)
                        neighbors++; // right
                }
            }
        }
        return land * 4 - neighbors * 2;
    }
};