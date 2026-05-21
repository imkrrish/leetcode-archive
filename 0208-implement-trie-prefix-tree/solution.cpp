class Trie {
public:
    struct trieNode {
        bool endOfWord;
        trieNode* children[26];
    };

    trieNode* getNode() {
        trieNode* newNode = new trieNode();
        newNode->endOfWord = false;

        for (int i = 0; i < 26; i++) {
            newNode->children[i] = nullptr;
        }

        return newNode;
    }

    trieNode* root;

    Trie() {
        root = getNode();
    }

    void insert(string word) {
        trieNode* crawler = root;

        for (char ch : word) {
            if (crawler->children[ch - 'a'] == nullptr) {
                crawler->children[ch - 'a'] = getNode();
            }
            crawler = crawler->children[ch - 'a'];
        }

        crawler->endOfWord = true;
    }

    bool search(string word) {
        trieNode* crawler = root;

        for (char ch : word) {
            if (crawler->children[ch - 'a'] == nullptr) {
                return false;
            }
            crawler = crawler->children[ch - 'a'];
        }

        if (crawler && crawler->endOfWord) {
            return true;
        }
        return false;
    }

    bool startsWith(string prefix) {
        trieNode* crawler = root;

        for (char ch : prefix) {
            if (crawler->children[ch - 'a'] == nullptr) {
                return false;
            }
            crawler = crawler->children[ch - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */