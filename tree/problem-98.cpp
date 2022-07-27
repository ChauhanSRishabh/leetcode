/* PROBLEM STATEMENT
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
  
A valid BST is defined as follows:
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
*/

/* LOGIC
Starting with the root node, it's value must be in the range {-2^31, 2^31 - 1}
For it's left child, value should be in the range {-2^31, value at parent node-1}
For it's right child, value should be in the range {value at parent node + 1, 2^31 - 1}
proceed lly for all the nodes
In the recursion, we go to each node once and at each node, we take constant time to see whether data in that node is in a defined range or not.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isValidBSTUtil(TreeNode* root, long int minValue, long int maxValue) {
        if(root == NULL)
            return true;
        if(root->val > minValue && root->val < maxValue && isValidBSTUtil(root->left, minValue, root->val) && isValidBSTUtil(root->right, root->val, maxValue))
            return true;
        else
            return false;
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSTUtil(root, LONG_MIN, LONG_MAX);
    }
};
