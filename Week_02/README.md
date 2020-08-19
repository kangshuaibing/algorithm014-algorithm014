# 第二周学习笔记

## 感想


## 切题四件套
1.Clarificatin 
2.pssiable solution --> ptimal(time & space)  
3.code 
4.test cases
## 视频笔记
### 1.哈希表，映射，集合()
* 工程实践
  1.电话簿  
  2.用户信息表  
  3.缓存(LRU Cache)  
  4.键值对存储(Redis)  

	Map:key-value对，key不重复
	Set:重复元素的集合
### 2.树、二叉树、二叉搜索树

* Linked List是特殊化的Tree		 
* Tree是特殊化的Graph		 

* struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
	}
* 二叉树遍历Pre-order/In-order/Post-order
  1.前序:根-左-右  
  2.中序:左-根-右   
  3.后序:左-右-根   
 * 二叉搜索树(二叉排序树)
  1.左子树所有节点的值均小于它的根节点 	 
  2.右子树所有节点的值均大于它的根节点  	 
  3.故：左右子树分别为二叉查找树	
  中序遍历：升序排列
 
  

* 最近相关性-栈  
* 先来后到-队列  

