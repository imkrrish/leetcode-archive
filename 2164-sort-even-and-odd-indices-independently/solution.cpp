class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> oddArr;
        vector<int> evenArr;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                evenArr.push_back(nums[i]);
            } else {
                oddArr.push_back(nums[i]);
            }
        }

        sort(evenArr.begin(), evenArr.end());
        sort(oddArr.begin(), oddArr.end(), greater<int>());

        int e = 0, o = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                nums[i] = evenArr[e++];
            } else {
                nums[i] = oddArr[o++];
            }
        }

        return nums;
    }
};