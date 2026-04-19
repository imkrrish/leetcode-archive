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
    //     result.push_back(root->val);
    //     helper(root->right, result);
    // }

    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     helper(root, result);
    //     return result;
    // }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();
            result.push_back(curr->val);
            curr = curr->right;
        };

        return result;
    }
};