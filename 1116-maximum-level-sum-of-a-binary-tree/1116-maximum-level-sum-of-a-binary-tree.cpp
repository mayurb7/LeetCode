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
    int maxLevelSum(TreeNode* root) {
        vector<int> arr;
        int maxi=INT_MIN;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int currSum=0;
            int n=q.size();

            for(int i=0 ; i<n ; i++){
                if(q.front()->right!=NULL){
                    q.push(q.front()->right);
                }

                if(q.front()->left!=NULL){
                    q.push(q.front()->left);
                }

                currSum+=q.front()->val;
                q.pop();
            }
            maxi=max(maxi,currSum);
            arr.push_back(currSum);
        }

        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]==maxi){
                return i+1;
            }
        }

        return 0;
    }
};