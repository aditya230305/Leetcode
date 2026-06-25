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
    void traversal(TreeNode*root,int level,vector<int>&arr){
        if(root==nullptr) return;
        if(arr.size()==level) arr.push_back(root->val);
        traversal(root->right,level+1,arr);
        traversal(root->left,level+1,arr);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>arr;
        traversal(root,0,arr);
        return arr;
    }
};