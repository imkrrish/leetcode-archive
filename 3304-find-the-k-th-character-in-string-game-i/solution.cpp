class Solution {
public:
    string word = "a";
    char kthCharacter(int k) {
        getWord(k);
        cout << word;
        return word[k - 1];
    }
    void getWord(int k) {
        if (k <= 1) {
            return;
        } else {
            int i = 0;
            string temp;
            while (word[i] != '\0') {
                temp.append(1, word[i] + 1);
                i++;
                k--;
            }
            word.append(temp);
            getWord(k);
        }
    }
};