/*
PROBLEM STATEMENT
Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].

Example :
Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
Output: 32
Explanation: Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.
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
    int sum = 0;
    void Preorder(TreeNode* root, int low, int high){
        if(root == NULL)
            return;
        if(root->val >= low && root->val <= high)
            sum +=root->val;
        
        Preorder(root->left, low, high);
        Preorder(root->right, low, high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        Preorder(root, low, high);
        return sum;
    }
};
