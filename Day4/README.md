# LeetCode刷题Day4

刷题题目：
- 24.两两交换链表中的节点
- 19.删除链表的倒数第N个节点
- 面试题 02.07. 链表相交
- 142.环形链表II 

**NOTE: 代码均在每一个题目对应的文件夹下**

## 24.两两交换链表中的节点
1. dummy head虚拟节点的思想已经比较熟悉，但是在实现的过程中会遇到指针指向不清晰的问题，
因此需要通过提前存储临时节点来保存必要的节点信息。
2. 同时需要注意while循环的条件:在这道题目中因为有两个节点，所有需要同时判断node->next和node->next->next是否同时存在
如果两个node不是同时存在那么不需要进行交换

## 19.删除链表的倒数第N个节点
1. 使用双指针的方法来确定需要删除节点个数的位置
2. 实现比较顺利

## 面试题 02.07. 链表相交
1. 解题思路需要更加熟悉
2. 需要注意，节点相交意味着节点相同（节点地址相同）而不仅仅是节点中的数值相同

## 142.环形链表II
1. 能想到通过快慢指针解决此问题，然是无法想到如何确定环形链表的入口
