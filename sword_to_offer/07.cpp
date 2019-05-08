#include <iostream>

using namespace std;


struct BinaryTreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


BinaryTreeNode* Construct(int* preorder, int* inorder, int length){
    if(preorder == nullptr || inorder == nullptr || length <= 0)
        return nullptr;

    return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}

BinaryTreeNode* ConstructCore(int* startPreorder, int* endPreorder,int* startInorder, int* endInorder){
    // ǰ��������еĵ�һ�������Ǹ��ڵ��ֵ
    int rootValue = startPreorder[0];
    BinaryTreeNode* root = new BinaryTreeNode();
    root-> val = rootValue;
    root->left = root->right = nullptr;

    if(startPreorder== endPreorder){
        if(startInorder == endInorder) && *startPreorder == *startInorder)
            return root;
        else
            throw std::exception("Invalid input.");
    }

    // ����������������ҵ����ڵ��ֵ
    int* rootInorder = startInorder;
    while(rootInorder <= endInorder && *rootInorder != rootValue)
        ++rootInorder;

    if(rootInorder == endInorder && *rootInorder != rootValue)
        throw std::exception("Invalid input.")

    int leftLength = rootInorder - startInorder;
    int* leftPreorderEnd = startPreorder + leftLength;
    if(leftLength > 0){
        // ����������
        root->left = ConstructCore(startPreorder + 1, leftPreorderEnd, startInorder, rootInorder - 1);
    }
    if(leftLength < endPreorder - startPreorder){
        // ����������
        root->right = ConstructCore(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);
    }

    return root;
}
