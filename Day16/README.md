# LeetCode刷题Day16

刷题题目：
- 104.二叉树的最大深度
- 111.二叉树的最小深度 
- 222.完全二叉树的节点个数

**NOTE: 代码均在每一个题目对应的文件夹下**

## 104.二叉树的最大深度
1. 这道题背景知识需要了解二叉树的“高度”和“深度”
2. “高度”代表了二叉树中任意一个节点到叶子结点的距离（后序遍历）
3. “深度”代表了二叉树中任意一个结点到根结点到距离（前序遍历）
4. 这道题的核心在于二叉树的最大深度等于二叉树的高度，所以可以用后序遍历去解决

## 111.二叉树的最小深度
1. 和104类似但又不完全一样
2. 这道题需要注意左子树或者右子树为空的情况：不能返回两个子树深度更小的，因为空子树的高度为0，这种情况只返回子树不为空的即可
3. 还是使用后序遍历更加简便，也更直接

## 222.完全二叉树结点的数量
1. 普通二叉树节点的数量解法非常直接，但是时间复杂度为O(n)
2. 完全二叉树：除了底层节点，以上所有层节点是满的，并且底层节点从左到右依次排列
3. 使用完全二叉树的特性：如果左子树的深度和右子树的深度一样，说明是一个这个子树是一个满二叉树，所以可以用满二叉树计算结点个数的公式计算


