#include <iostream>
#include <stack>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


void PrintListReversingly_Iteratively(ListNode* pHead){
    stack<ListNode*> nodes;

    ListNode* pNode = pHead;
    while(pNode != nullptr){
        nodes.push(pNode);
        pNode = pNode->next;
    }
    while(!nodes.empty()){
        pNode = nodes.top();
        cout << pNode->val << '\t';
        nodes.pop();
    }
}

void PrintListReversingly_Recursively(ListNode* pHead){
    if(pHead != nullptr){
        if(pHead->next != nullptr)
            PrintListReversingly_Recursively(pHead->next);
        cout << pHead->val << '\t';
    }
}
