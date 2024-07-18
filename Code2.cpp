/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int num;

    vector<int> dfs(TreeNode* node, int& dis) {
        if (node == nullptr)
            return {};
        if (node->left == nullptr && node->right == nullptr)
            return {1};

        vector<int> leftv = dfs(node->left, dis);
        vector<int> rightv = dfs(node->right, dis);

        for (auto lv : leftv) {
            for (auto rv : rightv) {
                if (rv + lv <= dis)
                    num++;
            }
        }
        vector<int> parentv;
        for (auto lv : leftv) {
            if (lv + 1 <= dis)
                parentv.push_back(lv + 1);
        }
        for (auto rv : rightv) {
            if (rv + 1 <= dis)
                parentv.push_back(rv + 1);
        }
        return parentv;
    }
    int countPairs(TreeNode* root, int dis) {
        num = 0;
        dfs(root, dis);
        return num;
    }
};
