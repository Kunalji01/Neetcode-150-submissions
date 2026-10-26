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
        if(root == NULL)return 0;

        int lftHt = ht(root->left);
        int rtHt = ht(root->right);

        return max(lftHt,rtHt)+1;
    }
    int dia(TreeNode* root){
        if(root == NULL)return 0;

        int lftDia = dia(root->left);
        int rhtDia = dia(root->right);

        int currDia = ht(root->left) + ht(root->right);

        return max(lftDia ,max(rhtDia,currDia)) ;
    }

    int diameterOfBinaryTree(TreeNode* root) {

        return dia(root);
    }
};
