#pragma once
#include <iostream>
#include<vector>
#include <stack>
using namespace std;

class CQeue
{
private:
	stack<int> stack1;
	stack<int> stack2;

public:
	void appendtail(int element)
	{
		stack1.push(element);
	}

	int deletehead()
	{
		if (stack2.size() <= 0)
		{
			while (stack1.size() > 0)
			{
				int data=stack1.top();
				stack1.pop();
				stack2.push(data);
				
			}
		}

		if (stack2.size() == 0)
		{
			cout << "stack is empty" << endl;
		}
		int head=stack2.top();
		stack2.pop();
		return head;
	}
};


////Ö÷º¯Êý
//#include <iostream>
//#include "offer_9.h"
//using namespace std;
//
//
//int main()
//{
//	CQeue temp;
//	//temp.appendtail(1);
//	//temp.appendtail(2);
//	//temp.appendtail(3);
//	int result = temp.deletehead();
//	//cout << result << endl;
//	//int result1 = temp.deletehead();
//	//cout << result1 << endl;
//	//int result2 = temp.deletehead();
//	//cout << result2 << endl;
//	return 0;
//}
