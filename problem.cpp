// Given the root of a Binary Search Tree and a target number k, return true if there exist two elements in the BST such that their sum is equal to the given target.


class Solution {
public:
void storeInorder(TreeNode* root, vector<int> &inorder){
    if(root == NULL)
        return;

    storeInorder(root->left , inorder);
    inorder.push_back(root->val);
    storeInorder(root->right,inorder);

}
bool findTarget(TreeNode* root, int k) {
    vector<int> inorder;

    storeInorder(root,inorder);

    int s = 0 , e = inorder.size() -1;

    while( s < e ){
        if( inorder[s] + inorder[e] == k ){
            return true;
        }
        else if( inorder[s] + inorder[e] < k ){
            s++;
        }
        else{
            e--;
        }
    }

    return false;
}
};
