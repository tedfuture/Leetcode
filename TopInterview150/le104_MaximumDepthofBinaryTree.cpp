class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return depth;
        if(++order>depth)
            depth = order;
        maxDepth(root->left);
        maxDepth(root->right);
        order--;
        return depth;
    }
    int order = 0;
    int depth = 0;
};
