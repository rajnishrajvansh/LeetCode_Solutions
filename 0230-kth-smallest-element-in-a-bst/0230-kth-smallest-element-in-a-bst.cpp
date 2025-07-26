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
  int  kthSmallestRec(TreeNode* node,int &count,int k){
        if(node==NULL) return -1;
        int left=kthSmallestRec(node->left,count,k);
        if(left!=-1) return left;
        count++;
        if(count==k) return node->val;
       int right= kthSmallestRec(node->right,count,k);
       return right;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        return kthSmallestRec(root,count,k);
        
    }
};