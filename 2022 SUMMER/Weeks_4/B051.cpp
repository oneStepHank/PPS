#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> ans;
    void treePath(TreeNode* root, string s){
        if(root == NULL)
            return;
        s += to_string(root->val);
        if(root->left || root->right){
            s += "->";
        }
        else
        {
            ans.push_back(s);
            return;
        }
        treePath(root->left, s);
        treePath(root->right, s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        treePath(root, "");
        return ans;
    }
};
