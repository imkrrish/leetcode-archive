class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i = 0;
        int j = n - 1;

        int max_area = INT_MIN;

        while (i < j) {
            int l = j - i;
            int h = min(height[i], height[j]);
            max_area = max(max_area, l * h);

            if (height[i] > height[j]) {
                j--;
            } else {
                i++;
            }
        }

        return max_area;
    }
};