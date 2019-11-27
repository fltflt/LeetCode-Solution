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