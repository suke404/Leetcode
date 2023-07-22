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
    int heightHelper(TreeNode* root){
        if(root==NULL)return 0;
        int left = heightHelper(root->left);
        int right = heightHelper(root->right);
        if(left == -1 || right == -1)return -1;
        if(abs(left-right) > 1)return -1;
        return max(left, right)+1;
    }


    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        if(heightHelper(root)==-1)return false;
        return true;
    }
};