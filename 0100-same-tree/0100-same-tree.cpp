
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> bfs;
        bfs.push(p);
        bfs.push(q);

        while(!bfs.empty()){
            TreeNode* t1=bfs.top();
            bfs.pop();
            TreeNode* t2=bfs.top();
            bfs.pop();

            if(t1==t2) continue;
            else if(!t1 && t2) return false;
            else if(t1 && !t2) return false;
            else if(t1->val != t2->val) return false;

            bfs.push(t1->left);
            bfs.push(t2->left); 
            bfs.push(t1->right);
            bfs.push(t2->right); 

        }
        return true;
    }
};