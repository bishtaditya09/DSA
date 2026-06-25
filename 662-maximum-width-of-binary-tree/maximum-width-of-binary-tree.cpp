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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int>>que;
        que.push({root,0});
        int fi,las;
        int width=0;
        while(!que.empty())
        {
            int size=que.size();
            int mnv=que.front().second; //minimum value;
            for(int i=0;i<size;i++)
            {
                 int curr=que.front().second-mnv;
                 TreeNode* node=que.front().first;
                 que.pop();
                 if(i==0) fi=curr;
                 if(i==size-1) las=curr;
                 if(node->left) que.push({node->left,curr*2LL+1});
                 if(node->right) que.push({node->right,curr*2LL+2});
            }
          width=max(width,las-fi+1);
        }
        return width;
    }
};