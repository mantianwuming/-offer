# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def GetNext(node):
    if node == None:
        return None

    if node.right != None:
        pright = node.right
        while pright.left != None:
            pright = pright.left
        pnext = pright

    elif node.parent != None:
        pcurrent = node
        pparent = node.parent
        while pparent != None and pcurrent == pparent.right:
            pcurrent = pparent
            pparent = pparent.parent
        pnext = pparent

    return pnext
