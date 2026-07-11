/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)
        return "";
        string s;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty())
        {
            auto node=que.front();
            que.pop();
            if(!node) s.append("#,");
            else
            s.append(to_string(node->val)+',');
            if(node!=NULL)
            {
                que.push(node->left);
                que.push(node->right);
            }
        } 
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        queue<TreeNode*>que;
        TreeNode* root=new TreeNode(stoi(str));
        que.push(root);
        while(!que.empty())
        {
             auto node=que.front();
             que.pop();
             
             getline(s,str,',');
             if(str=="#")
             node->left=NULL;
             else
             {
                 TreeNode* left=new TreeNode(stoi(str));
                 node->left=left;
                 que.push(node->left);
             }

             getline(s,str,',');
             if(str=="#") node->right=NULL;
             else
             {
                  TreeNode* right=new TreeNode(stoi(str));
                  node->right=right;
                  que.push(node->right);
             }
        }
      return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));