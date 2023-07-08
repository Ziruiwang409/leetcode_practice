# LeetCode刷题Day22

刷题题目：
- 235.二叉搜索树的最近公共祖先
- 501.二叉搜索树中的众数
- 236.二叉树的最近公共祖先


**NOTE: 代码均在每一个题目对应的文件夹下**

## 235.二叉搜索树的最近公共祖先
1. 和二叉树不同，这道题可以巧妙运用二叉搜索树的特征：左子树的数值一定比根结点小，右子树数值一定比根结点大
2. 因此公共祖先一定是在p和q之间的
3. 如何确保找到p和q之间的数值一定是最近公共祖先，二叉树特性可以保证

## 236.二叉树的最近公共祖先
1. 使用后序遍历因为后序遍历可以让我们从下到上处理二叉树