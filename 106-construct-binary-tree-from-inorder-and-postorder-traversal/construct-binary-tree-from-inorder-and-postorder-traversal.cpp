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
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int ins,int ien,int pst,int pen)
    {
         if(ins>ien || pst>pen) return NULL;
         int val=postorder[pen];

         int i;
         for(i=ins;i<=ien;i++)
         {
            if(val==inorder[i])
            break;
         }
         int lesz=i-ins;
         int risz=ien-i;

         TreeNode* root=new TreeNode(val);
         root->left=solve(inorder,postorder,ins,i-1,pst,pst+lesz-1);
         root->right=solve(inorder,postorder,i+1,ien,pen-risz,pen-1);
         return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
           int n=inorder.size();
           return solve(inorder,postorder,0,n-1,0,n-1);
    }
};