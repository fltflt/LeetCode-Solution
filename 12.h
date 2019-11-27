#pragma once
#include <iostream>
using namespace std;
#include <stack>

class MinStack 
{
private:
	vector<int> sta;
public:

	void push(int number) 
	{
		sta.push_back(number);
	}

	int pop() 
	{
		int value=sta[sta.size()-1];
		sta.pop_back();
		return value;
	}

	int min() 
	{
		int min= sta.front();
		for(int i=1;i<sta.size();i++)
		{
			int num = sta[i];
			if (num <= min)
				min = num;

		}
		return min;

	}
};
//Ö÷º¯Êý

//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include "12.h"
//
//int main()
//{
//	class MinStack stack_test;
//	stack_test.push(3);
//
//	stack_test.push(2);
//
//	stack_test.push(1);
//	cout << stack_test.min() << endl;
//	cout << stack_test.pop() << endl;
//	cout << stack_test.min() << endl;
//	cout << stack_test.pop() << endl;
//	cout << stack_test.min() << endl;
//
//}
