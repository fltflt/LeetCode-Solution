#pragma once
#include <iostream>
using namespace std;

#include <stack>
#include<iostream>
using namespace std;
#include<vector>

class MyStack
{
private:
	char *m_pBuffer;     // 栈空间的指针
	int m_iSize;         // 栈容量
	int m_iTop;          // 栈顶

public:
	/*构造函数，确保每一个数据成员都初始化*/
	MyStack::MyStack(int size)
	{
		m_iSize = size;
		m_pBuffer = new char[size];
		m_iTop = 0;
	}


	MyStack::~MyStack()
	{
		delete[] m_pBuffer;
	}

	bool MyStack::stackEmpty()
	{
		if (m_iTop == 0)
			return true;
		else
			return false;
	}

	bool MyStack::stackFull()
	{
		if (m_iTop >= m_iSize)
			return true;
		else
			return false;
	}

	void MyStack::clearStack()
	{
		m_iTop = 0;
	}

	int MyStack::stackLength()
	{
		return m_iTop;
	}

	void MyStack::push(char elem)
	{
		if (stackFull())
		{
			cout << "栈满，无法入栈" << endl;
			return;
		}
		else 
		{
			m_pBuffer[m_iTop] = elem;
			m_iTop++;
		}
	}

	bool MyStack::pop(char &elem)
	{
		if (stackEmpty())
			return false;
		m_iTop--;
		elem = m_pBuffer[m_iTop];
		return true;
	}

	void MyStack::stackTraverse()
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i] << ",";
		}
		cout << endl;

	}
};

class MyStack_vector
{
private:
	vector<int> stack_vector;     // 栈空间的指针
	int m_iTop;          // 栈顶

public:
	/*构造函数，确保每一个数据成员都初始化*/
	MyStack_vector(vector<int> stack_vector)
	{
		m_iTop = 0;
	}

	bool stackEmpty()
	{
		if (m_iTop == 0)
		{
			cout << "栈空！" << endl;
			return true;
		}
		else
		{
			cout << "栈非空！" << endl;
			return false;

		}
	}


	void clearStack()
	{
		m_iTop = 0;
		cout << "栈空！"<<endl;
	}

	void stackLength()
	{
		cout << "目前栈的长度为"<<stack_vector.size() << endl;
	}

	void push(int elem)
	{
		stack_vector.push_back(elem);
		m_iTop++;
	}

	void pop()
	{
		if (stackEmpty())
			cout << "栈空！，无法出栈" << endl;
		cout << "出栈元素为" << stack_vector[stack_vector.back()-1] << endl;
		m_iTop--;

		stack_vector.pop_back();
	}

	void stack_chuzhan()
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << stack_vector[i] << ",";
		}
		cout << endl;

	}
};