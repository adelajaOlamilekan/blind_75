# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        
        #Checks if tree is empty
        if root == None:
            return root

        #Stores left and right child in a temporary variable
        left_temp = root.left
        right_temp = root.right

        #Swap right and left child
        root.right = left_temp
        root.left = right_temp

        #Invert SubTree
        self.invertTree(left_temp)
        self.invertTree(right_temp)
        
        return root