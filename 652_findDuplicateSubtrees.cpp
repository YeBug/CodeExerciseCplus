#include<string>
#include<vector>
#include<unordered_map>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    string dfs(TreeNode* root) {
        if (root == nullptr) return "";
        string str = to_string(root->val) + " " + dfs(root->left) + " " + dfs(root->right);
        maps[str] += 1;
        if (maps[str] == 2) ans.push_back(root);
        return str;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        dfs(root);
        return ans;
    }
private:
    vector<TreeNode*> ans;
    unordered_map<string, int> maps;
};