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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        queue<TreeNode*>que;
        if(root==NULL) return ans;
        que.push(root);
        bool ltr=true;      //left->right true pe
        while(!que.empty())
        {
            int size=que.size();
            vector<int>lev(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=que.front();
                que.pop();
                int index=ltr?i:size-1-i;
                lev[index]=node->val;
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
           ans.push_back(lev);
           ltr=!ltr;
        }
        return ans;
    }
};