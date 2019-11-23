#pragma once
#include <iostream>
using namespace std;
#include<vector>

class Stack
{
private:
	vector<int> stack_vector;     // Õ»¿Õ¼äµÄÖ¸Õë
	int m_iTop = 0;          // Õ»¶¥
public:

	/*
	 * @param x: An integer
	 * @return: nothing
	 */
	void push(int x)
	{
		stack_vector.push_back(x);
		m_iTop++;
	};
	/*
	 * @return: nothing
	 */
	void pop()
	{
		if (isEmpty())
			return;
		else
		{
			stack_vector.pop_back();
			m_iTop--;
		}

	};

	/*
	 * @return: An integer
	 */
	int top()
	{
		return stack_vector.back();
	};

	/*
	 * @return: True if the stack is empty
	 */
	bool isEmpty()
	{
		if (m_iTop == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};