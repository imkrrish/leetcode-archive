class Solution {
public:
    struct triNode {
        triNode* child[10];
    };

    triNode* getNode() {
        triNode* newNode = new triNode();
        for (int i = 0; i < 10; i++) {
            newNode->child[i] = nullptr;
        }

        return newNode;
    }

    void insert(int num, triNode* root) {
        triNode* crawler = root;
        string numStr = to_string(num);

        for (char ch : numStr) {
            if (crawler->child[ch - '0'] == nullptr) {
                crawler->child[ch - '0'] = getNode();
            }
            crawler = crawler->child[ch - '0'];
        }
    }

    int search(int num, triNode* root) {
        triNode* crawler = root;
        string numStr = to_string(num);
        int len = 0;

        for (char ch : numStr) {
            if (crawler->child[ch - '0'] != nullptr) {
                len++;
                crawler = crawler->child[ch - '0'];
            } else {
                break;
            }
        }

        return len;
    }

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        triNode* root = getNode();

        for (int& num : arr1) {
            insert(num, root);
        }

        int result = 0;

        for (int& num : arr2) {
            result = max(result, search(num, root));
        }

        return result;
    }
};