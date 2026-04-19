/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    // void helper(TreeNode* root, vector<int>& result) {
    //     if (!root)
    //         return;
    //     helper(root->left, result);
    //     helper(root->right, result);
    //     result.push_back(root->val);
    // }

    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     helper(root, result);
    //     return result;
    // }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root)
            return result;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            result.push_back(node->val);

            if (node->left)
                st.push(node->left);
            if (node->right)
                st.push(node->right);
        };

        reverse(result.begin(), result.end());

        return result;
    }
};