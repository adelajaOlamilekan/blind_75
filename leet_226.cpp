/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return root;
        
        //Store left and right child in temporary variable
        TreeNode* left_child = root ->left;
        TreeNode* right_child = root -> right;

        root->right = left_child;
        root->left = right_child;

        invertTree(left_child);
        invertTree(right_child);

        return root;

    }
};