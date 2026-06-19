class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt = 0;
        int curr = 0;

        for (int& g : gain) {
            curr += g;

            max_alt = max(max_alt, curr);
        }

        return max_alt;
    }
};