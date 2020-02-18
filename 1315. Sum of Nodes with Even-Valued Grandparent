/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans = 0 ;
class Solution {
public:

    void dfs( TreeNode* x , TreeNode* parent  , TreeNode* grandparent ){
        if(grandparent && grandparent->val%2==0){
            ans += x->val;
        }
        if(x->left){
            dfs(x->left,x,parent);
        }
        if(x->right){
            dfs(x->right,x,parent);
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        ans = 0 ;
        dfs(root,NULL,NULL);
        return ans ;
    }
};
