#pragma once
#include <iostream>
#include <vector>
#include <math.h>
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
     int helper(TreeNode* root);
     bool helper2(TreeNode* root);
     bool isBalanced(TreeNode* root) {
         return helper2(root);
     }
 };
 int Solution::helper(TreeNode* root)
 {
     if (root == NULL)
         return 1;
     int cnt1 = 0, cnt2 = 0;
     if (root->left == NULL && root->right == NULL)
         return 1;
     if (root->left != NULL) {
         cnt1 = helper(root->left);

     }
     if (root->right != NULL) {
         cnt2 = helper(root->right);
     }
     return (cnt1 > cnt2) ? cnt1 + 1 : cnt2 + 1;



 }
 bool Solution::helper2(TreeNode* root)
 {
     int cntl = 0, cntr = 0;
     if (root == NULL || (root->left == NULL && root->right == NULL))
         return 1;

     cntl = helper(root->left);
     cntr = helper(root->right);
     if (/*abs(cntl - cntr) == 1 ||*/ abs(cntl - cntr) == 0)
         return 1;
     return 0;

     if (helper2(root->left) && helper2(root->right))
         return 1;
     else return 0;
 }