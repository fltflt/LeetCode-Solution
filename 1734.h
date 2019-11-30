#pragma once
#include <iostream>
using namespace std;
#include<vector>
#include <numeric>
class solve_1734 {
	/**
	 * @param A: an array
	 * @return: the sum of subarray minimums
	 */
public:
	int sumSubarrayMins(vector<int> A)
	{
		vector <int> temp;
		int sum = 0;
		for (int i=0;i<A.size();i++)
		{
			temp.push_back(A[i]);
			sum += A[i];
			for (int j = i+1; j < A.size(); j++)
			{
				temp.push_back(A[j]);
				vector<int>::iterator min = min_element(temp.begin(), temp.end());
				sum += *min;
			}
			temp.clear();
		}

		return sum;
	}
};
