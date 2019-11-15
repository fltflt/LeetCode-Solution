#pragma once
#include <iostream>
using namespace std;

#include <vector>
class Solution {
public:
	/**
	 * @param numbers: An array of Integer
	 * @param target: target = numbers[index1] + numbers[index2]
	 * @return: [index1, index2] (index1 < index2)
	 */
	vector<int> twoSum(vector<int> &numbers, int target) {
		vector<int> twoSum;
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			for (int j = i+1; j < numbers.size(); j++)
			{
				int sum = numbers[i] + numbers[j];
				if (sum == target)
				{
					twoSum.push_back(i);
					twoSum.push_back(j);
				}

			}
		}
		return twoSum;
	}
};

//////Ö÷º¯Êý
//Solution function;
//int main()
//{
//	vector<int> num = { 2,3 };
//	vector<int> sum_he;
//	sum_he = function.twoSum(num, 5);
//	for (int i = 0; i < sum_he.size(); i++)
//	{
//		cout << sum_he[i] << endl;
//	}
//
//
//}