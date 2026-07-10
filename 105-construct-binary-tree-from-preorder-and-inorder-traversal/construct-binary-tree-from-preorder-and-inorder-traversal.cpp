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
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int>mp;
        for(int i=0;i<pre.size();i++)
        mp[in[i]]=i;

        TreeNode* root=build(pre,0,pre.size()-1,in,0,in.size()-1,mp);
        return root;
    }
    TreeNode* build(vector<int>&pre,int pst,int pen,vector<int>&in,int ist,int ien,
    unordered_map<int,int>&mp)
    {
          if(ist>ien || pst>pen) return NULL;
          TreeNode* node=new TreeNode(pre[pst]);
          int inRoot=mp[node->val];
          int numsLeft=inRoot-ist;
          node->left=build(pre,pst+1,pen+numsLeft,in,ist,inRoot-1,mp);
          node->right=build(pre,pst+numsLeft+1,pen,in,inRoot+1,ien,mp);
        return node;
    }
};