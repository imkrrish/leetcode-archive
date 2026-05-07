class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);

        string temp = "";

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                words[pos] = temp;
                temp = "";
            } else {
                temp += s[i];
            }
        }

        string result = "";

        for (int i = 1; i <= 9; i++) {
            if (words[i] != "") {
                if (!result.empty())
                    result += " ";
                result += words[i];
            }
        }

        return result;
    }
};