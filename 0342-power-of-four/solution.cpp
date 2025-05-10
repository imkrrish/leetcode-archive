class Solution {
public:
    bool isPowerOfFour(double n) {
        if (n == 1.0) {
            return true;
        } else if (n < 1) {
            return false;
        } else {
            return isPowerOfFour(n / 4.0);
        }
    }
};