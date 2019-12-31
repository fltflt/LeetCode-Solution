#pragma once
#include <iostream>
using namespace std;
int Min_sort(vector<int> number)
{
	if (number.size()==0)
	{
		cout << "ÊäÈëÎŞĞ§" << endl;
	}
	int index1 = 0;
	int index2 = number.size() - 1;
	int midindex = index1;

	while (number[index1]>=number[index2])
	{
		if (index2 == index1 + 1)
		{
			midindex = index2;
			break;
		}
		midindex = (index2 + index1) / 2;
		if (number[index1] == number[index2] && number[index1] == number[midindex])
		{
			int temp = number[0];
			for (int i = 1; i < number.size(); i++)
			{
				if (number[i] < temp)
				{
					temp = number[i];
				}
			}
			return temp;
		}
		if (number[midindex]>=number[index1])
		{
			 index1= midindex;
		}
		if (number[midindex] <= number[index2])
		{
			index2= midindex;
		}

		
	}
	return number[midindex];
}

//#pragma once
//#include <vector>
//#include <iostream>
//#include "offer_11.h"
//
//int main()
//{
//	//vector<int> number= {3,4,5,1,2};
//	//vector<int> number = { 1,0,1,1,1 };
//	//vector<int> number;
//	int result = Min_sort(number);
//	return 0;
//}
