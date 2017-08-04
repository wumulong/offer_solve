#include <iostream>
#include <stack>

using namespace std;
/*用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。*/
class Solution
{
public:
    void push(int node) 
    {
        stack1.push(node);
    }

    int pop() 
    {
    	int a;
        if (stack2.empty())
        {
        	while(!stack1.empty())
        	{
        		//a=stack1.top();
        		stack2.push(stack1.top());
        		stack1.pop();
        	}	
        }
        a=stack2.top();
        stack2.pop();
        return a;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
int main(int argc, char const *argv[])
{
	Solution s1;
	s1.push(1);
	//s1.push(2);
	s1.pop();
	return 0;
}