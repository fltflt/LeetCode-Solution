#include <iostream>
using namespace std;
#include <fstream>
#include <stack>

#include <list>
#include "stack_lianxi.h"
#include <vector>
#include "1206.h"
void swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
};

void swap(int, int b = 10);


void read_test()
{
	int data[10];
	ifstream reader;
	reader.open("F:\\inv_flt\\1.txt", ios::out | ios::in);
	if (!reader.is_open()) // ����ļ��Ƿ�ɹ��� 
		cout << "cannot open file." << endl;
	reader >> data[10];
	cout<< data[10] << endl;
	reader.close();
};

void swap_copy(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
};


void stack_lainxi()
{
	stack<int> oop;
	oop.push(1);
	oop.push(2);
	oop.push(3);
	cout<<oop.size()<<endl;
	cout << oop.top() << endl;

};


void stack_shuzu()
{
	MyStack *pStack = new MyStack(5);
	pStack->push('h');
	pStack->push('e');
	pStack->push('l');
	pStack->push('l');
	pStack->push('o');


	char elem = 0;
	pStack->pop(elem);
	cout << elem << endl;
	pStack->stackTraverse();
	pStack->clearStack();
	cout << pStack->stackLength() << endl;

	if (pStack->stackEmpty())
	{
		cout << "ջΪ��" << endl;
	}
	if (pStack->stackFull())
	{
		cout << "ջΪ��" << endl;
	}
	delete pStack;
	pStack = NULL;
};


void stack_vector()
{
	vector<int> stack_vector;
	MyStack_vector pStack_vector = MyStack_vector(stack_vector);
	pStack_vector.push(1);
	pStack_vector.push(2);
	pStack_vector.push(3);
	pStack_vector.push(4);
	pStack_vector.push(5);
	pStack_vector.push(6);
	pStack_vector.push(7);


	pStack_vector.stackEmpty();

	pStack_vector.stackLength();
	pStack_vector.stack_chuzhan();
	pStack_vector.pop();

};

void stack_list()
{
	MyStack_list();
	class MyStack_list function;
	function.push(1);
	function.push(1);
	function.push(1);

	function.stackEmpty();
	function.stackLength();
	function.stack_chuzhan();
	function.pop();
	//stack_list.push(1);
	//pStack_list.push(2);
	//pStack_list.push(3);
	//pStack_list.push(4);
	//pStack_list.push(5);
	//pStack_list.push(6);
	//pStack_list.push(7);


	//pStack_list.stackEmpty();

	//pStack_list.stackLength();
	//pStack_list.stack_chuzhan();
	//pStack_list.pop();

};

void stack_oop()
{
	class Stack function;
	function.push(1);
	function.pop();
	function.push(2);
	function.isEmpty();
	function.top();
	function.pop();
	function.isEmpty();
};

vector<int> nextGreaterElement(vector<int> A,vector<int> B)
{
	vector<int> res;
	int m;
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
		{
			if (A[i] == B[j])
			{
				m=j;
				int k=m+1;
				for (k; k < B.size();)
				{
					if (B[k] > A[i])
					{
						res.push_back(B[k]);
						break;
					}
					else
					{
						k++;
					}
				}
				if (k == B.size())
				{
					res.push_back(-1);
				}

				
			}
		}
	}
	return res;
}


void test()
{

	vector<int> A = { 4,1,2 };
	vector<int> B = {1,3,4,2};
	class Solution1 fun;
	vector<int> res = fun.nextGreaterElement(A,B);


}




