# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

def PrintListReversingly_Iteratively(root):
    res = []
    ans = []
    if root == None:
        return []
    node = root
    while node:
        res.append(node.val)
        node = node.next
    while res:
        ans.append(res.pop())

    return ans

def PrintListReversingly_Recursively(root):
    if root != None:
        if root.next != None:
            PrintListReversingly_Recursively(root.next)
        print(root.val)
