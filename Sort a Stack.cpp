#include <bits/stdc++.h> 
void insert(stack<int>&stack,int t)
{
	if(stack.empty())	{stack.push(t); return;}
	if(stack.top()>=t)
	{
		int t1=stack.top();
		stack.pop();
		insert(stack,t);
		stack.push(t1);
	}
	else
	stack.push(t);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty())	return;
	int t=stack.top();
	stack.pop();
	sortStack(stack);
	insert(stack,t);
}
