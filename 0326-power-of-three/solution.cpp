class Solution {
public:
    bool isPowerOfThree(double n) {
        if (n == 1.0)
            return true;
        else if (n < 1)
            return false;
        else
            return isPowerOfThree(n / 3.0);
    }
};