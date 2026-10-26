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
    
    int ht(TreeNode* root){
        if(root == NULL){
            return 0;

        }
        int lf = ht(root->left);
        if(lf == -1) return -1;
        int rt = ht(root->right);
        if(rt == -1) return -1;

        if(abs(lf-rt) > 1) return -1;

        return max(lf,rt) +1;
    }

    bool isBalanced(TreeNode* root) {

        int ans = ht(root);

        if(ans < 0) return false;
        return true;
    }
};
