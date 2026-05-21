class Solution {
public:
    vector<string> result;
    int m, n;

    // node struct for trie
    struct trieNode {
        bool endOfWord;
        string word;
        trieNode* children[26];
    };

    // get trie node
    trieNode* getNode() {
        trieNode* newNode = new trieNode();
        newNode->endOfWord = false;
        newNode->word = "";

        for (int i = 0; i < 26; i++) {
            newNode->children[i] = nullptr;
        }

        return newNode;
    }

    void insert(trieNode* root, string& word) {
        trieNode* crawler = root;

        // check for each char or word
        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];

            if (crawler->children[ch - 'a'] == nullptr) {
                crawler->children[ch - 'a'] = getNode();
            }

            crawler = crawler->children[ch - 'a'];
        }

        crawler->endOfWord = true;
        crawler->word = word;
    }

    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    void findTrieWords(vector<vector<char>>& board, int i, int j,
                       trieNode* root) {
        if (i < 0 || i >= m || j < 0 || j >= n) {
            return;
        }

        char ch = board[i][j];

        if (ch == '$' || root->children[ch - 'a'] == nullptr) {
            return;
        }

        root = root->children[ch - 'a'];

        if (root->endOfWord) {
            result.push_back(root->word);
            root->endOfWord = false;
        }

        // marking visited
        board[i][j] = '$';

        for (const auto& dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];
            findTrieWords(board, new_i, new_j, root);
        }

        // marking unvisited
        board[i][j] = ch;
    }

    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        if (board.empty() || board[0].empty())
            return {};

        m = board.size();    // row
        n = board[0].size(); // col

        // create root
        trieNode* root = getNode();

        // insert words in trie
        for (string& word : words) {
            insert(root, word);
        }

        // traverse in the grid
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                char ch = board[i][j];

                if (root->children[ch - 'a'] != nullptr) {
                    findTrieWords(board, i, j, root);
                }
            }
        }

        return result;
    }
};