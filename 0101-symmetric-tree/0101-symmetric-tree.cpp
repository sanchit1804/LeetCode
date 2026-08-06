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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> bfs;
        bfs.push(root->left);
        bfs.push(root->right);

        while(!bfs.empty()){
            TreeNode* t1=bfs.front();
            bfs.pop();
            TreeNode* t2=bfs.front();
            bfs.pop();

            if(!t1 && t2) return false;
            if(!t2 && t1) return false;
            if(!t1 && !t2) continue;
            if(t1->val !=t2->val) return false;

            bfs.push(t1->left);
            bfs.push(t2->right);
            bfs.push(t1->right);
            bfs.push(t2->left);
        }
        return true;
    }
};