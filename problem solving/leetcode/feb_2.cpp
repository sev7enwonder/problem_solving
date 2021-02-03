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
    TreeNode* trimBST(TreeNode* root, int lo, int hi) {
        if(!root) return NULL;
        TreeNode* tmp=root;
        tmp->left=trimBST(root->left,lo,hi);
        tmp->right=trimBST(root->right,lo,hi);
        if(root->val>=lo && root->val<=hi){
           return tmp;
        }else{
            if(tmp->left) return tmp->left;
            if(tmp->right) return tmp->right;
        }
        return NULL;
    }
};
