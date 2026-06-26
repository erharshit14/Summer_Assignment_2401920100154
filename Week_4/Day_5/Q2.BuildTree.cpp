class Solution {
public:
    unordered_map<int, int> mp;

    TreeNode* build(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& inorder, int inStart, int inEnd) {

        if (preStart > preEnd || inStart > inEnd) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preStart]);

        int index = mp[root->val];
        int leftSize = index - inStart;

        root->left = build(preorder, preStart + 1, preStart + leftSize,
                           inorder, inStart, index - 1);

        root->right = build(preorder, preStart + leftSize + 1, preEnd,
                            inorder, index + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return build(preorder, 0, preorder.size() - 1,
                     inorder, 0, inorder.size() - 1);
    }
};