class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min_num = INT_MAX;
        int max_num = INT_MIN;

        for (int& num : nums) {
            min_num = min(min_num, num);
            max_num = max(max_num, num);
        }

        return gcd(min_num, max_num);
    }
};