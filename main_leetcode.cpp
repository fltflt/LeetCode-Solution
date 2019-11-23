#include <iostream>
using namespace std;
#include <fstream>
#include <stack>


#include "stack_lianxi.h"
#include <vector>
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
	if (!reader.is_open()) // 检查文件是否成功打开 
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
		cout << "栈为空" << endl;
	}
	if (pStack->stackFull())
	{
		cout << "栈为满" << endl;
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

int main()
{
	stack_vector();

}




