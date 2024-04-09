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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>ans;
        stack<TreeNode*> temp;
        TreeNode * node = root;
        while(true)
        {
            if(node != NULL)
            {
                temp.push(node);
                node = node -> left;
            }
            else
            {
                if(temp.empty() == true)
                {
                    break;
                }
                node = temp.top();
                temp.pop();
                ans.push_back(node -> val);
                node = node ->right;
            }
        }
        return ans;
    }
};