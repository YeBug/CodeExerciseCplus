struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode():val(0), left(nullptr), right(nullptr){}
	TreeNode(int x):val(x), left(nullptr), right(nullptr){}
	TreeNode(int x, TreeNode* left, TreeNode* right):val(x),left(left),right(right){}
};

class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode* parent = nullptr;
        TreeNode* cur = root;
        while (cur) {
            if (cur->val < val) {
                if (parent) {
                    parent->right = new TreeNode(val, cur, nullptr);
                }
                else {
                    root = new TreeNode(val, cur, nullptr);
                }
                return root;
            }
            else {
                parent = cur;
                cur = cur->right;
            }
        }
        parent->right = new TreeNode(val);
        return root;
    }
};