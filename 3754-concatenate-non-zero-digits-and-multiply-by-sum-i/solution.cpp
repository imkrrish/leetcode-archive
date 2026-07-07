class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> digits;

        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                digits.push_back(digit);
            }
            n /= 10;
        }

        long long sum = 0;

        for (int& digit : digits) {
            sum += digit;
        }

        long long num = 0;
        if (!digits.empty()) {
            for (int i = digits.size() - 1; i >= 0; i--) {
                num = num * 10 + digits[i];
            }
        }

        return num * sum;
    }
};