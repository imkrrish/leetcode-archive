class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            char a = s[i];
            char b = s[j];

            if (!isalnum(a)) {
                i++;
            }

            if (!isalnum(b)) {
                j--;
            }

            if (isalnum(a) && isalnum(b)) {
                if (tolower(a) != tolower(b)) {
                    return false;
                } else {
                    i++;
                    j--;
                }
            }
        }

        return true;
    }
};