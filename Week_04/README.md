# 第四周学习笔记

## 感想
虽然以前学过数据结构与算法，但对时间复杂度和空间复杂度的计算一直都是一知半解。后来抱着试听的态度报了7天的体验课，听了超哥的讲解才豁然开朗，原来递归情况下这样求，还有主定理这种东西，毅然决然的报了这门课。虽然每天都有刷题，但并没有严格按照五毒神掌的步骤，一方面平时工作忙，再加上这周公司组织的3天团建，出去浪了一圈（很是罪过）。这周开始就要好好学习了，严格按照五毒神掌法，每天坚持刷3道以上题目（一天至少1道新题目）。
## 五毒神掌
1.5-10 分钟读题和思考，如果没有思路，看题解，默写代码  
2.马上自己写，提交LeetCode，多种解法，体会优化  
3.24 小时之后，再重复做题  
4.一周后重复做题  
5.面试前一周恢复性训练

## 切题四件套
1.理清题意，确定题目的要求  
2.想尽可能多的解法，对比几种写法的时空复杂度，找到比较好的解法  
3.尽可能多地动手写  
4.测试用例
## 视频笔记
### 1.深度优先搜索、广度优先搜索
* 搜索-遍历
1.每个节点都要访问一次  
2.美国和节点仅仅要访问一次  
3.对于节点的访问顺序不同  
-深度优先：depth first search  
-广度优先: breadth first search  
-优先级优先（启发式搜索)

* DFS模板
def dfs(node):
	if node in visited:
		#already visited
		return
		
	visited.add(node)
	
	# process current node
	#...#logic here
	dfs(node.left)
	dfs(node.right)

* DFS代码-递归写法1
visited = set()
def dfs(node,visited):
	visited.add(node)
	# process current node
	#...
	for next_node in node.children():
		if not_node in visited:
			dfs(next node,visited)

* DFS代码-递归写法1
visited = set()
def dfs(node,visited):
	if node in visited:
		#terminator
		#already visited
		return
		
	visited.add(node)
	# process current node
	#...
	for next_node in node.children():
		if not_node in visited:
			dfs(next node,visited)
			
* BFS代码
def BFS(graph,start,end)
	que =[]
	queue.append([start])
	visited.add(start)
	
	while queue:
	node = queue.pop();
	visited.add(node)
	
	process(node)
	nodes = generate_related_nodes(node)
	queue.push(nodes)
	
	#other processing work
		
### 贪心算法 Greedy
* 在每一步选择中都采取当前状态下最好或最优（即最有利）的选择，从而希望导致结果是全局最优
或者最好的算法
* 贪心算法与动态规划的不同在于它对每个子伪命题的解决方案都做出选择，不能回退；动态规划
则会保存以前的运行结果，并根据以前的结果对当前进行选择，有回退功能。
1. 贪心：当下做局部最优判断
2. 回溯：能够回退  
3. 动态规划：最有判断 + 回退  
* 贪心法可以解决一些有优化问题，如：求图的最小生成树、求哈夫曼编码等。然而对于工程和生活中的问题，
贪心算法一般不能得到我们所求的答案。
* 一旦一个问题可以通过贪心法来解决，那么贪心法一般是解决这个问题的最好方法。由于贪心法的高效性以及求
其所得的答案比较接近最优结果，贪心法也可以用作辅助算法或者直接解决一些要求结果不特别精确的问题。
* 最近相关性-栈  
* 先来后到-队列  

