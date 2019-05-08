#include <iostream>

using namespace std;


struct BinaryTreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

BinaryTreeNode* GetNext(BinaryTreeNode* pNode){
    if(pNode = nullptr)
        return nullptr;

    BinaryTreeNode* pNext = nullptr;
    if(pNode->right != nullprt){
        BinaryTreeNode* pRight = pNode->right;
        while(pRight->left != left)
            pRight = pRight->left;
        pNext = pRight;
    }
    else if(pNode->parent != nullptr){
        BinaryTreeNode* pCurrent = pNode;
        BinaryTreeNode* pParent = pNode->parent;
        while(pParent != nullptr && pCurrent == pParent->right){
            pCurrent = pParent;
            pParent = pParent->parent;
        }
        pNext = pParent;
    }
    return pNext;
}
