#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> helper(Node* root,vector<int> &postorder_traversal)
    {
        
        if(root == NULL)
        {
            return postorder_traversal;
        }
        
        for(int i=0;i<root->children.size();i++)
        {
            helper(root->children[i],postorder_traversal);
            
        }
        
        postorder_traversal.push_back(root->val);
        
        
        return postorder_traversal;
    }
    
    vector<int> postorder(Node* root) {
        vector<int> ans;
        
        helper(root, ans);
        return ans;
    }
};
