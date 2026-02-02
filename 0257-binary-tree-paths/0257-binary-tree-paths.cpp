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
    vector<string> ans;

    void makeString(TreeNode* currNode,string currString){
        if(currNode==NULL){
            return;
        }
        if(currNode->right==NULL && currNode->left==NULL){
            currString+="->";
            currString+=to_string(currNode->val);
            ans.push_back(currString);
            return;
        }

        currString+="->";
        currString+=to_string(currNode->val);

        makeString(currNode->right,currString);
        makeString(currNode->left,currString);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        string currString;
        currString+=to_string(root->val);

        if(root->right==NULL && root->left==NULL){
            ans.push_back(currString);
            return ans;
        }

        makeString(root->right,currString);
        makeString(root->left,currString);

        return ans;
    }
};