# LeetCode刷题Day14

刷题题目：
- 144.二叉树的前序遍历 (Pre-order Traversal)
- 94.二叉树的中序遍历 (In-order Traversal)
- 145.二叉树的后序遍历 (Post-order Traversal)

**NOTE: 代码均在每一个题目对应的文件夹下**

## 144.二叉树的前序遍历 (Pre-order Traversal)
1. 递归法轻松卸除
2. 迭代法看了讲解之后明白了思路
3. 迭代法其中要注意放入stack的顺序：因为我们想要的遍历顺序为“中左右”，但是由于stack是先进后出，所以需要改变放入stack的顺序为“中右左”

## 94.二叉树的中序遍历 (In-order Traversal)
1. 递归法轻松卸除
2. 迭代法看了讲解之后明白了思路

## 145.二叉树的后序遍历 (Post-order Traversal)
1. 递归法轻松卸除
2. 迭代法看了讲解之后明白了思路
3. 迭代法在144题前序遍历的基础上将加入stack的顺序修改并最后反转输出的数组便可以完成（没想到这个方法）
