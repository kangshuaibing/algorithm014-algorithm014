# 第三周学习笔记

## 感想

### 1.递归 Recursion
*   java代码模板
public void recur{level,param)
{
#recursion terminator 递归中介条件		
if(level>MAX_LEVEL)
{		
	process_result;		
	return;	
}	

#process logic in current level	处理当前逻辑	
process(level,param);		

#drill down		下探到下一层  
recur(level:level+1,newParam);		

#reverse the current level status if needed	清理当前层  

* 思维要点
1. 不要人肉递归  
2. 找最近重复子问题  
3. 数学归纳法思维  

* 实战项目 
  1.爬楼梯  
  2.括号生成  

### 2.分治(Divide&&Conquer)、回溯(Backtracking)-特殊的递归
*最优重复性--动态规划
*最近重复性--分治/回溯
1.分治代码模版
def devide_conquer(problem,param1,param,...)   
#recursion terminator 
if(problem is Done)  
	print_result  
	return  
	
#prepare data
data = prepare_date(problem)  
subproblems = split_problem(problem,data)  

#conquer subproblems
subresult1 = self.devide_conquer(subproblems[0],p1,..)  
subresult2 = self.devide_conquer(subproblems[1],p1,..)  
subresult3 = self.devide_conquer(subproblems[2],p1,..)  

#process and generatre the final result
eres = process_result(subresult1,subresult2,subresult3,...)  

#revert the current level states 

2.习题








 