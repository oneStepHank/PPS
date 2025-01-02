#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> inorder(TreeNode *root, vector<int> &inorder_travels){
        if(root == NULL)
            return inorder_travels;
        
        inorder(root->left, inorder_travels);
        inorder_travels.push_back(root->val);
        inorder(root->right, inorder_travels);
        
        return inorder_travels;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder_travels;
        
        return inorder(root, inorder_travels);
    }
};
