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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (!isBalancedHelper(node)) return false;

            if (node->left != nullptr) q.push(node->left);
            if (node->right != nullptr) q.push(node->right);
        }

        return true;
    }
    bool isBalancedHelper(TreeNode* node) {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        if (abs(leftHeight - rightHeight) > 1) return false;

        return true;
    }

    int getHeight(TreeNode* node) {
        if (node == nullptr) return 0;

        queue<TreeNode*> q;
        q.push(node);
        int height = 0;

        while (!q.empty()) {
            int size = q.size();
            height++;

            for (int i = 0; i < size; i++) {
                TreeNode* current = q.front();
                q.pop();

                if (current->left != nullptr) q.push(current->left);
                if (current->right != nullptr) q.push(current->right);
            }
        }

        return height;
    }
};