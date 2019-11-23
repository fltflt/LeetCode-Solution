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
	char *m_pBuffer;     // ջ�ռ��ָ��
	int m_iSize;         // ջ����
	int m_iTop;          // ջ��

public:
	/*���캯����ȷ��ÿһ�����ݳ�Ա����ʼ��*/
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
			cout << "ջ�����޷���ջ" << endl;
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
	vector<int> stack_vector;     // ջ�ռ��ָ��
	int m_iTop;          // ջ��

public:
	/*���캯����ȷ��ÿһ�����ݳ�Ա����ʼ��*/
	MyStack_vector(vector<int> stack_vector)
	{
		m_iTop = 0;
	}

	bool stackEmpty()
	{
		if (m_iTop == 0)
		{
			cout << "ջ�գ�" << endl;
			return true;
		}
		else
		{
			cout << "ջ�ǿգ�" << endl;
			return false;

		}
	}


	void clearStack()
	{
		m_iTop = 0;
		cout << "ջ�գ�"<<endl;
	}

	//bool stackFull()
	//{
	//	if (stack_vector.size() >= size_vector)
	//	{
	//		return true;
	//		cout << "ջ����" << endl;

	//	}
	//	else
	//	{
	//		return false;
	//	}
	//}
	void stackLength()
	{
		cout << "Ŀǰջ�ĳ���Ϊ"<<stack_vector.size() << endl;
	}

	void push(int elem)
	{
		stack_vector.push_back(elem);
		m_iTop++;
	}

	void pop()
	{
		if (stackEmpty())
			cout << "ջ�գ����޷���ջ" << endl;
		cout << "��ջԪ��Ϊ" << stack_vector[stack_vector.back()-1] << endl;
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