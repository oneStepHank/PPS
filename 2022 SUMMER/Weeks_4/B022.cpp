#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> post(TreeNode* root, vector<int> &post_travels){
        if(root == NULL)
            return post_travels;
        
        post(root->left, post_travels);
        post(root->right, post_travels);
        post_travels.push_back(root->val);
        
        return post_travels;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> post_travels;
        
        return post(root, post_travels);
    }
};
