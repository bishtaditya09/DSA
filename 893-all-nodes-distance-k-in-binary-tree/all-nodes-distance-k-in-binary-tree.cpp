/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void bfsParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp)
    {
         queue<TreeNode*>que;
         que.push(root);
         while(!que.empty())
         {
             auto node=que.front();
             que.pop();
             if(node->left)
             {
                 mp[node->left]=node;
                 que.push(node->left);
             }
             if(node->right)
             {
                 mp[node->right]=node;
                 que.push(node->right);
             }
         }
    }
    vector<int>dis(TreeNode* root,unordered_map<TreeNode*,TreeNode*>mp,
    TreeNode* target,int k,vector<int>&ans)
    {
         unordered_map<TreeNode*,int>vis;
         vis[target]=1;
         queue<TreeNode*>que;
         que.push(target);
         int currlev=0;
         while(!que.empty())
         {
             int sz=que.size();
             if(currlev==k) break;
             currlev++;
             for(int i=0;i<sz;i++)
             {
                 auto node=que.front();
                 que.pop();
                 if(node->left && !vis[node->left])
                 {
                     que.push(node->left);
                     vis[node->left]=1;
                 }
                 if(node->right && !vis[node->right])
                 {
                     que.push(node->right);
                     vis[node->right]=1;
                 }
                 if(mp[node] && !vis[mp[node]])
                 {
                     que.push(mp[node]);
                     vis[mp[node]]=1;
                 }
             }
         }
         while(!que.empty())
         {
            auto node=que.front();
            que.pop();
            ans.push_back(node->val);
         }
         return ans;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
         unordered_map<TreeNode*,TreeNode*>mp;
         bfsParent(root,mp);
         vector<int>ans;
         return dis(root,mp,target,k,ans);  
    }
};