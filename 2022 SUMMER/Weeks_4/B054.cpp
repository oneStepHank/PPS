#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> helper(Node* root, vector<int> &preorder_travels){
        if(root == NULL)
            return preorder_travels;
        preorder_travels.push_back(root->val);
        for(int i = 0 ; i< root->children.size(); i++){
            helper(root->children[i], preorder_travels);
        }
        return preorder_travels;
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};
