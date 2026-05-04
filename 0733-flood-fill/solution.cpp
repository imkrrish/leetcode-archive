class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int new_color,
             int org_color) {
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() ||
            image[i][j] == new_color || image[i][j] != org_color) {
            return;
        }

        image[i][j] = new_color;

        dfs(image, i - 1, j, new_color, org_color); // top
        dfs(image, i + 1, j, new_color, org_color); // bottom
        dfs(image, i, j + 1, new_color, org_color); // right
        dfs(image, i, j - 1, new_color, org_color); // left
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};