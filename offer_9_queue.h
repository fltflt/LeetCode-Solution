#pragma once
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class CStack
{
private:
	queue<int> queue1;
	queue<int> queue2;

public:
	void appendtail(int element)
	{
		if (queue1.empty())
		{
			queue2.push(element);
		}
		else if (queue2.empty())
		{
			queue1.push(element);
		}
	}
	int deletehead()
	{
		int head;
		if (queue2.empty())
		{
			while (queue1.size() != 1)
			{
				int data = queue1.front();
				queue2.push(data);
				queue1.pop();
			}
			head = queue1.back();
			queue1.pop();
		}
		else if (queue1.empty())
		{
			while (queue2.size() != 1)
			{
				int data = queue2.front();
				queue1.push(data);
				queue2.pop();
			}
			head = queue2.back();
			queue2.pop();
		}


		return head;
	}
};

//#include <iostream>
////#include "offer_9_queue.h"
//#include "offer_9_stack.h"
//using namespace std;
//
//
//int main()
//{
//	CQeue temp;
//	temp.appendtail(1);
//	temp.appendtail(2);
//	temp.appendtail(3);
//	int result = temp.deletehead();
//	cout << result << endl;
//	int result1 = temp.deletehead();
//	cout << result1 << endl;
//	int result2 = temp.deletehead();
//	cout << result2 << endl;
//	return 0;
//}